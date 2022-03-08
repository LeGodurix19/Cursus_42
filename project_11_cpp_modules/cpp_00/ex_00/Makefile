# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 11:05:12 by hgoorick          #+#    #+#              #
#    Updated: 2022/03/08 11:47:07 by hgoorick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEFAULT			=	\033[0;39m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
BLUE			=	\033[0;94m

FAST			=	0.0001

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			@clang++ $(FLAGS) $(OBJ) -o $(NAME)
			@echo "\n$(GREEN)COMPILATION OK$(DEFAULT)"

%.o:%.cpp
	@clang++ ${FLAGS} -c $< -o $@
	@printf "${START_FIRST}${BLUE}%-30s${DEFAULT}\t\t[${GREEN}%-15s${DEFAULT}]" $(NAME) $<
	@sleep ${FAST}

clean:
		@rm -rf $(OBJ)
		@echo "\033[36mCLEAN OK\033[0m"

fclean: clean
		@rm -rf $(NAME)
		@echo "\033[36mFCLEAN OK\033[0m"

re: fclean all