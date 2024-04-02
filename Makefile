NAME = pushswap

#==============================================================================#
#                                    RULES                                     #
#==============================================================================#

CC = cc -g
FLAGS =  -Wall -Wextra -Werror
RM = rm -rf

#==============================================================================#
#                                    FILES                                     #
#==============================================================================#

LIBFT = include/libft/libft.a
PRINTF = include/ft_printf/libftprintf.a
SRC =\
main/main.c main/error_check.c \
extras/extras.c \
operations/operations_stack_1.c operations/operations_stack_2.c operations/operations_stack_3.c \
algorithm/algorithm_1.c algorithm/algorithm_2.c algorithm/algorithm_3.c \
stack_utils/stack_utils.c stack_utils/stack_utils_1.c stack_utils/stack_utils_2.c
OBJ = $(SRC:.c=.o)

#==============================================================================#
#                                    MAKE                                      #
#==============================================================================#

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
