NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBC = ar rcs

#Libraries
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

RM = rm -f

SRC= main.c \
	init_stack_a.c \
	free_stack.c \
	error_exit.c \
	ft_atol.c \
	stack_is_sorted.c \
	swap.c \

OBJS = ${SRC:.c=.o}

#Rules
all: $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo $(NAME) compiled
	
$(LIBFT):
	@echo libft compiling...
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory
	@echo libft compiled

clean:
	@$(MAKE) clean -C $(LIBFT_DIR) --no-print-directory
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR) --no-print-directory
	@$(RM) $(NAME)

re: fclean all
