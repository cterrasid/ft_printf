# VARIABLES

## COMPILATION VARIABLES
SRC_DIR		=	src
SRCS		=	$(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_printchar.c $(SRC_DIR)/ft_printstr.c \
				$(SRC_DIR)/ft_printhex.c $(SRC_DIR)/ft_printnum.c $(SRC_DIR)/ft_printunum.c
OBJS		=	$(SRCS:.c=.o)
CC			=	@gcc
CFLAGS		=	-Wall -Werror -Wextra -I
INC_DIR		=	inc
RMRF		=	@rm -rf
PACK		=	@ar crs
ECHO		=	@echo
NAME		=	libftprintf.a
LIBFT_DIR	=	libft
LIBFT		=	$(LIBFT_DIR)/libft.a

## COLOR VARIABLES
RED = \033[1;91m
YELLOW = \033[0;93m
BYELLOW = \033[1;93m
BPURPLE = \033[1;35m
PURPLE = \033[0;35m

# RULES
all:		$(NAME)

%.o : 		%.c
			@make -C $(LIBFT_DIR)
			@mv $(LIBFT) $(NAME)
			$(CC) -c $(CFLAGS) $(INC_DIR) $< -o $@
			$(ECHO) "$(PURPLE)Compiling $<..."
			$(ECHO) "$(BPURPLE)$< successfully compiled!"

$(NAME):	$(OBJS)
			$(PACK) $(NAME) $(OBJS)
			$(ECHO) "$(YELLOW)Compiling $(NAME)..."
			$(ECHO) "$(BYELLOW)$(NAME) successfully compiled!"

clean:		
			@cd ./libft; make clean
			$(RMRF) $(OBJS)
			$(ECHO) "$(RED)ft_printf *.o files successfully deleted!"

fclean:		clean
			@cd ./libft; make fclean
			$(RMRF) $(NAME)
			$(ECHO) "$(RED)$(NAME) successfully deleted!"

re:			fclean all

.PHONY:		all clean fclean re
