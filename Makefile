NAME = pushswap
CC = cc -g
FLAGS =  -Wall -Wextra -Werror
LIBFT = include/libft/libft.a
PRINTF = include/ft_printf/libftprintf.a
SRC =  sources/main.c sources/extras.c sources/stack_utils.c sources/operations_stack_1.c sources/operations_stack_2.c sources/operations_stack_3.c sources/error_check.c sources/algorithm_1.c sources/algorithm_2.c sources/algorithm_3.c sources/stack_utils_1.c sources/stack_utils_2.c
RM = rm -rf
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :  $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(SRC) -o $(NAME) $(LIBFT) $(PRINTF)

$(LIBFT):
	make -C include/libft

$(PRINTF):
	make -C include/ft_printf
clean:
	$(RM) $(OBJ)
	make -C include/ft_printf clean
	make -C include/libft clean

fclean: clean
	$(RM) $(NAME)
	make -C include/ft_printf fclean
	make -C include/libft fclean

re:
	fclean all
