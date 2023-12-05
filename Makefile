NAME = pushswap
CC = cc
FLAGS =  -Wall -Wextra -Werror
LIBFT = include/libft/libft.a
PRINTF = include/ft_printf/libftprintf.a
SRC =  sources/main.c sources/extras.c sources/stack_utils.c sources/operations_stack_1.c
RM = rm -rf
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :  $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(SRC) -o $(NAME) $(LIBFT) $(PRINTF)

$(LIBFT):
	make -C include/libft

$(PRINTF):
	make -C include/ft_printf

fclean:
	$(RM) $(OBJ) $(NAME)
	make -C include/ft_printf fclean
	make -C include/libft fclean
