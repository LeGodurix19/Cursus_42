# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 15:24:56 by hgoorick          #+#    #+#              #
#    Updated: 2022/03/08 11:49:20 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEFAULT			=	\033[0;39m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
BLUE			=	\033[0;94m
START_FIRST		=	\033[999D

FAST			=	0.0001

NAME = Animals

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	srcs/main.cpp \
		srcs/Animal.class.cpp \
		srcs/Cat.class.cpp \
		srcs/Dog.class.cpp \
		srcs/Brain.class.cpp \
		srcs/WrongAnimal.class.cpp \
		srcs/WrongCat.class.cpp \
		srcs/WrongDog.class.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			@clang++ $(FLAGS) $(OBJ) -o $(NAME)
			@printf "${START_FIRST}$(GREEN)%-100s$(DEFAULT)\n" "COMPILATION OK"

%.o:%.cpp
	@clang++ ${FLAGS} -c $< -o $@
	@printf "${START_FIRST}${BLUE}%-30s${DEFAULT}\t\t[${GREEN}%-25s${DEFAULT}]" $(NAME) $<
	@sleep ${FAST}

clean:
		@rm -rf $(OBJ)
		@echo "$(RED)CLEAN OK${DEFAULT}"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(RED)FCLEAN OK${DEFAULT}"

re: fclean all