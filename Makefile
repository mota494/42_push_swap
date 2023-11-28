NAME = pushswap
CC = cc
FLAGS =  -Wall -Wextra -Werror
LIBFT = include/libft/libft.a
SRC =  sources/main.c sources/stack_utils.c sources/operations_stack_a.c
RM = rm -rf
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :  $(OBJ) $(LIBFT)
	$(CC) $(SRC) -o $(NAME) $(LIBFT)

$(LIBFT):
	make -C include/libft -s

fclean:
	$(RM) $(OBJ) $(NAME)
	make -C include/libft fclean -s
