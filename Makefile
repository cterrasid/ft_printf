# VARIABLES

## COMPILATION VARIABLES
SRCS		=	ft_printf.c
OBJS		=	$(SRCS:.c=.o)
CC			=	@gcc
CFLAGS		=	-Wall -Werror -Wextra
RMRF		=	@rm -rf
NAME		=	libftprintf.a

## COLOR VARIABLES
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

# RULES
all:		$(NAME)

$(NAME):	$(OBJS)
			@ar crs $(NAME) $(OBJS)
			@echo "$(YELLOW)Compiling..."
			@echo "$(GREEN)$(NAME) successfully compiled!"

clean:		
			$(RMRF) $(OBJS)
			@echo "$(RED)*.o successfully deleted!"

fclean:		clean
			$(RMRF) $(NAME)
			@echo "$(RED)$(NAME) successfully deleted!"

re:			fclean all

.PHONY:		all clean fclean re
