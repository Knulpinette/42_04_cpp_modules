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

NAME	= zombie_horde

# -*- Definitions of variables -*-

SRCS_DIR		=  
OBJS_DIR		= objs

SRCS			:= $(shell find *.cpp)
OBJS			:= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

# HEADERS			=	$(shell find *.hpp)
HEADERS			= Zombie.hpp

ĨNCLUDES	= -I $(HEADERS)

CC			= clang++
RM			= rm -f
MAKE		= make
CFLAGS 		= -std=c++98 -Wall -Wextra -Werror

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

$(OBJS_DIR)/%.o: %.cpp
			@mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

# Compilation rule

${NAME}:	$(HEADERS) ${OBJS}
			@printf "\n"
			@$(CC) ${CFLAGS} ${INCLUDES} -o $(NAME) $(OBJS)
			@printf "	${WHITE}[${GREEN} Success.${WHITE}]\
			${END} \n\n"

bonus:		${NAME} 

#	Active rules

all:		${NAME}

#	Cleaning rules

clean:
			@${RM} ${OBJS}
			@printf "\n	${WHITE}[${BLUE} Cleaned object files ${WHITE}]\
			${END}\n"

fclean:		clean
			@${RM} ${NAME}
			@${RM} -d ${OBJS_DIR}
			@printf "\n	${WHITE}[${BLUE} Cleaned all files ${WHITE}]\
			${END}\n"


re:			fclean all

.PHONY:		all clean fclean re


