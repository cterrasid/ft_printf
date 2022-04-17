# VARIABLES

## COMPILATION VARIABLES
SRCS		=	ft_printf.c
OBJS		=	$(SRCS:.c=.o)
CC			=	@gcc
CFLAGS		=	-Wall -Werror -Wextra -I
INC_DIR		=	inc
RMRF		=	@rm -rf
LIB			=	@ar crs
ECHO		=	@echo
NAME		=	libftprintf.a

## COLOR VARIABLES
RED = \033[1;91m
YELLOW = \033[0;93m
BYELLOW = \033[1;93m
BPURPLE = \033[1;35m
PURPLE = \033[0;35m

# RULES
all:		$(NAME)

%.o : 		%.c
			$(CC) -c $(CFLAGS) $(INC_DIR) $< -o $@
			$(ECHO) "$(PURPLE)Compiling $<..."
			$(ECHO) "$(BPURPLE)$< successfully compiled!"

$(NAME):	$(OBJS)
			$(LIB) $(NAME) $(OBJS)
			$(ECHO) "$(YELLOW)Compiling $(NAME)..."
			$(ECHO) "$(BYELLOW)$(NAME) successfully compiled!"

clean:		
			$(RMRF) $(OBJS)
			$(ECHO) "$(RED)*.o files successfully deleted!"

fclean:		clean
			$(RMRF) $(NAME)
			$(ECHO) "$(RED)$(NAME) successfully deleted!"

re:			fclean all

.PHONY:		all clean fclean re
