DEFAULT			=	\033[0;39m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
START_FIRST		=	\033[999D

FLAGS = -std=c++98 -Wall -Werror -Wextra

SRCS1 = main1.cpp

SRCS2 = main2.cpp test_map.cpp test_vector.cpp test_stack.cpp

INC = include/

all:
	make test

%.o:%.cpp
	@c++ ${FLAGS} -c $< -o $@

ft:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with my containers:"
	@make NAMESPACE=ft test1


std:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with default containers:"
	@make NAMESPACE=std test1

verif:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with my containers:"
	@printf "${START_FIRST}$(YELLOW)\t%-100s$(DEFAULT)" "COMPILATION ..."
	@c++ -I $(INC) -D NAMESPACE=verif $(CFLAGS) $(SRCS2) -o verif
	@printf "${START_FIRST}$(GREEN)\t%-100s$(DEFAULT)\n" "COMPILATION OK"

test1:
	@printf "${START_FIRST}$(YELLOW)\t%-100s$(DEFAULT)" "COMPILATION ..."
	@c++ -I $(INC) -D NAMESPACE=$(NAMESPACE) $(CFLAGS) $(SRCS1) -o $(NAMESPACE)
	@printf "${START_FIRST}$(GREEN)\t%-100s$(DEFAULT)\n" "COMPILATION OK"

test: ft std verif
	@./verif all
	@echo "\n+-------------------------------------------+"
	@echo "|###########################################|"
	@echo "+-------------------------------------------+\n"
	@./ft > ft_output
	@./std > std_output
	@diff -y --suppress-common-lines ft_output std_output || true

clean:
	@rm -rf ft_output std_output 
	@rm -rf ft.dSYM std.dSYM
	@echo "$(RED)CLEAN OK${DEFAULT}"

fclean: clean
	@rm -rf ft std verif
	@echo "$(RED)ALL CLEAN OK${DEFAULT}"

re: fclean  test

retest: clean test1 verif

.PHONY: bin clean re runstd runft retest
