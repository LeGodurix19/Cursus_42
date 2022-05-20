DEFAULT			=	\033[0;39m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
START_FIRST		=	\033[999D

FLAGS = -std=c++98

SRCS1 = main1.cpp

SRCS2 = main2.cpp test_map.cpp test_vector.cpp test_stack.cpp

INC = include/

all:
	make test

ft:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with my containers:"
	@make NAMESPACE=ft test1

std:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with default containers:"
	@make NAMESPACE=std test1

verif:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with my containers:"
	@make NAMESPACE=verif test2

test1:
	@printf "${START_FIRST}$(YELLOW)\t%-100s$(DEFAULT)" "COMPILATION ..."
	@clang++ -I $(INC) -D NAMESPACE=$(NAMESPACE) $(CFLAGS) $(SRCS1) -o $(NAMESPACE)
	@printf "${START_FIRST}$(GREEN)\t%-100s$(DEFAULT)\n" "COMPILATION OK"

test2:
	@printf "${START_FIRST}$(YELLOW)\t%-100s$(DEFAULT)" "COMPILATION ..."
	@clang++ -I $(INC) -D NAMESPACE=$(NAMESPACE) $(CFLAGS) $(SRCS2) -o $(NAMESPACE)
	@printf "${START_FIRST}$(GREEN)\t%-100s$(DEFAULT)\n" "COMPILATION OK"

runft: ft
	@./ft

runstd: std
	@./std

runverif: verif
	@./verif all

test: ft std runverif
	@echo "\n+-------------------------------------------+"
	@echo "|###########################################|"
	@echo "+-------------------------------------------+\n"

	@./ft > ft_output
	@./std > std_output
	@diff -y --suppress-common-lines ft_output std_output || true

clean:
	@rm -rf ft std ft_output std_output verif
	@rm -rf ft.dSYM std.dSYM
	@echo "$(RED)CLEAN OK${DEFAULT}"

re: clean ft

retest: clean test1 verif

.PHONY: bin clean re runstd runft retest
