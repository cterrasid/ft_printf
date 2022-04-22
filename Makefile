# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 15:08:21 by cterrasi          #+#    #+#              #
#    Updated: 2022/04/22 19:10:11 by cterrasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES

## COMPILATION VARIABLES
SRC_DIR		=	src/
SRC_FILES	=	ft_printf.c ft_print_c.c ft_print_s.c \
				ft_print_hex.c ft_print_num.c ft_print_u.c \
				ft_print_p.c
SRCS		=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		=	$(SRCS:.c=.o)
CC			=	@gcc
CFLAGS		=	-Wall -Werror -Wextra -I
INC_DIR		=	inc
RMRF		=	@rm -rf
PACK		=	@ar crs
ECHO		=	@echo
NAME		=	libftprintf.a
LIBFT_DIR	=	libft/
LIBFT_LIB	=	libft.a
LIBFT_NAME	=	$(addprefix $(LIBFT_DIR), $(LIBFT_LIB))

## COLOR VARIABLES
RED = \033[1;91m
BOLD_YELLOW = \033[1;93m
PURPLE = \033[0;35m

# RULES
all:		$(NAME)

%.o : 		%.c
			$(CC) -c $(CFLAGS) $(INC_DIR) $< -o $@
			$(ECHO) "$(PURPLE)$< successfully compiled!"

$(NAME):	$(OBJS)
			@make -C $(LIBFT_DIR)
			$(PACK) $(NAME) $(OBJS)
			@mv $(LIBFT_NAME) $(NAME)
			$(ECHO) "$(BOLD_YELLOW)$(NAME) successfully compiled!"

clean:		
			@make clean -C $(LIBFT_DIR)
			$(RMRF) $(OBJS)
			$(ECHO) "$(RED)ft_printf *.o files successfully deleted!"

fclean:		clean
			@make fclean -C $(LIBFT_DIR)
			$(RMRF) $(NAME)
			$(ECHO) "$(RED)$(NAME) successfully deleted!"

re:			fclean all

.PHONY:		all clean fclean re
