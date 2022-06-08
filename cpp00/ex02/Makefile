# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osurcouf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 13:51:10 by osurcouf          #+#    #+#              #
#    Updated: 2021/08/04 13:51:13 by osurcouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*-🦕-*- Make C++ Piscine! -*-🦕-*- 

NAME	= account_log

# -*- Definitions of variables -*-

SRCS_DIR		= ./
SRCS			:= Account.cpp tests.cpp

CC			= clang++
RM			= rm -f
MAKE		= make
CFLAGS 		= -Wall -Wextra -Werror

# Colors

GRAY		= \e[1;30m
GREEN 		= \e[1;32m
DARK_GREEN	= \e[0;32m
YELLOW		= \e[1;33m
BLUE		= \e[1;34m
PURPLE		= \e[1;35m
CYAN		= \e[1;36m
WHITE		= \e[1;37m
NORMAL		= \e[0;37m
END			= \e[0m

# -*- The Rules -*-

#	Implicit rules

#	Active rules

all:		${NAME}

# Compilation rule

${NAME}:	${SRCS}
			@printf "\n"
			@$(CC) ${CFLAGS} ${SRCS} -o $(NAME)
			@printf "	${WHITE}[${GREEN} Success. Compiled accounts.${WHITE}]\
			${END} \n\n"

bonus:		${NAME} 

#	Cleaning rules

clean:
			@${RM} ${NAME}
			@printf "\n	${WHITE}[${BLUE} Cleaned accounts output files ${WHITE}]\
			${END}\n"

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re


