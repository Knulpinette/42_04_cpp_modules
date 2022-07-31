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

NAME	= diamondtrap

# -*- Definitions of variables -*-

SRCS_DIR		=  
OBJS_DIR		= objs

SRCS			:= $(shell find *.cpp)
OBJS			:= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

#HEADERS			=	$(shell find *.hpp)

ĨNCLUDES	= -I $(HEADERS)

CC			= c++
RM			= rm -f
MAKE		= make
CFLAGS 		= -std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow

### Shadowing
# Each block defines its own scope region. So what happens when we have a variable inside a 
# nested block that has the same name as a variable in an outer block? When this happens, 
# the nested variable “hides” the outer variable in areas where they are both in scope. This 
# is called name hiding or shadowing.

### Flags
## Wshadow
# Warn whenever a local variable or type declaration shadows another variable, 
# parameter, type, class member (in C++), or instance variable (in Objective-C) 
# or whenever a built-in function is shadowed. Note that in C++, the compiler warns if 
# a local variable shadows an explicit typedef, but not if it shadows a struct/class/enum. 
# If this warning is enabled, it includes also all instances of local shadowing. This means 
# that -Wno-shadow=local and -Wno-shadow=compatible-local are ignored when -Wshadow is used.
## Wno-shadow
# Do not warn whenever a local variable shadows an instance variable in an Objective-C method. 

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


