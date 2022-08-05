DEFAULT			=	\033[0;39m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
START_FIRST		=	\033[999D

FLAGS = -std=c++98 -Wall -Werror -Wextra

SRCS1 = main1.cpp

SRCS = main.cpp

SRCS2 = main2.cpp test_map.cpp test_vector.cpp test_stack.cpp

INC = include/

all:
	@make test

%.o:%.cpp
	@c++ ${FLAGS} -c $< -o $@

ft:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with my containers:"
	@make NAMESPACE=ft test1


classic:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with classic:"
	@make NAMESPACE=ft test2

classic2:
	@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "Try with classic:"
	@make NAMESPACE=std test2


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

test2:
	@printf "${START_FIRST}$(YELLOW)\t%-100s$(DEFAULT)" "COMPILATION ..."
	@c++ -I $(INC) -D NAMESPACE=$(NAMESPACE) $(CFLAGS) $(SRCS) -o $(NAMESPACE)6
	@printf "${START_FIRST}$(GREEN)\t%-100s$(DEFAULT)\n" "COMPILATION OK"

test: ft std classic classic2 verif
	@echo "$(GREEN)\n+-------------------------------------------+"
	@echo "|###########################################|"
	@echo "| Test with compare                         |"
	@echo "|###########################################|"
	@echo "+-------------------------------------------+\n$(DEFAULT)"
	@./verif all
	@echo "$(GREEN)\n+-------------------------------------------+"
	@echo "|###########################################|"
	@echo "| Test with time                            |"
	@echo "|###########################################|"
	@echo "+-------------------------------------------+\n$(DEFAULT)"
	@./ft  > ft_output
	@./std  > std_output
	@diff -y --suppress-common-line ft_output std_output || true
	@echo "$(GREEN)\n+-------------------------------------------+"
	@echo "|###########################################|"
	@echo "| Default test from 19                      |"
	@echo "|###########################################|"
	@echo "+-------------------------------------------+\n$(DEFAULT)"
	@echo "\n$(GREEN)Personnal test :$(DEFAULT)"
	@./ft6 65 > ft_output6
	@time -p ./ft6 65
	@echo "\n$(GREEN)Default test :$(DEFAULT)"
	@time -p ./std6 65
	@./std6 65 > std_output6
	@echo "\n$(GREEN)Result (ok if empty) :$(DEFAULT)"
	@diff ft_output6 std_output6

clean:
	@rm -rf ft_output std_output
	@rm -rf ft_output6 std_output6
	@echo "$(RED)CLEAN OK${DEFAULT}"

fclean: clean
	@rm -rf verif
	@rm -rf ft std
	@rm -rf ft6 std6
	@echo "$(RED)ALL CLEAN OK${DEFAULT}"

re: fclean  test

retest: clean test1 verif
