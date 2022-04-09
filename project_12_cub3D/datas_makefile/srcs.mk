# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugogoorickx <hugogoorickx@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 13:03:06 by hugoorickx        #+#    #+#              #
#    Updated: 2022/04/09 23:38:20 by hugogoorick      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

# *** #
# INC #
# *** #

INCLUDES	=	./includes
LIBFT		=	./lib/bin/libft.a

# *** #
# DIR #
# *** #

OBJ_DIR		=	./objs
SRC_DIR		=	./srcs

# *** #
# OBJ #
# *** #

OBJS	= 	$(addprefix ${OBJ_DIR}/,${SRC:.c=.o})
OBJS_MAIN	= 	$(addprefix ${OBJ_DIR}/,${MAIN:.c=.o})
OBJS_BONUS	= 	$(addprefix ${OBJ_DIR}/,${BONUS:.c=.o})

# *** #
# SRC #
# *** #

MAIN = main.c

BONUS += key_hook_bonus.c
BONUS += main_bonus.c

SRC += ft_print_error.c
SRC += check.c
SRC += convert.c
SRC += copy.c
SRC += first_tests.c
SRC += give_me_wall.c
SRC += ray_cast.c
SRC += ray_cast_utils.c
SRC += math_fcts.c
SRC += move.c
SRC += key_hook.c
SRC += malloc_fcts.c
SRC += def_vars.c
