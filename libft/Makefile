# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 19:45:55 by cterrasi          #+#    #+#              #
#    Updated: 2022/04/17 07:35:38 by cterrasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES

## COMPILATION VARIABLES
SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isprint.c \
				ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_strchr.c ft_strdup.c ft_strnstr.c ft_strrchr.c ft_strncmp.c \
				ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS		=	$(SRCS:.c=.o)
BONUS_SRCS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
				ft_lstlast_bonus.c
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)
B			=	.bonus
CC			=	@gcc
CFLAGS		=	-Wall -Werror -Wextra -I
INC_DIR		=	../inc
RMRF		=	@rm -rf
PACK		=	@ar crs
ECHO		=	@echo
NAME		=	libft.a

## COLOR VARIABLES
RED = \033[1;91m
YELLOW = \033[0;93m
BYELLOW = \033[1;93m
BPURPLE = \033[1;35m
PURPLE = \033[0;35m

# RULES
all:		$(NAME)

%.o :		%.c
			$(CC) -c $(CFLAGS) $(INC_DIR) $< -o $@
			$(ECHO) "$(PURPLE)Compiling $<..."
			$(ECHO) "$(BPURPLE)$< successfully compiled!"

bonus:		$(B)

$(NAME):	$(OBJS)
			$(PACK) $(NAME) $(OBJS)
			$(ECHO) "$(YELLOW)Compiling $(NAME)..."
			$(ECHO) "$(BYELLOW)$(NAME) successfully compiled!"

$(B):		$(OBJS) $(BONUS_OBJS)
			$(PACK) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
			$(RMRF) $(OBJS) $(BONUS_OBJS)
			$(ECHO) "$(RED)libft *.o files successfully deleted!"

fclean:		clean
			$(RMRF) $(NAME)
			$(ECHO) "$(RED)$(NAME) successfully deleted!"

re:			fclean all

.PHONY:		all clean fclean re