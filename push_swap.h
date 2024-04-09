/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 12:14:49 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include "include/libft/libft.h"
# include "include/ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	long				content;
	long				target;
	int				cost;
	int				rot_to;
	struct s_stack	*next;
}					t_stack;

/* operations_stack_1.c */
void	swap_a(t_stack **stack_a, int print);
void	swap_b(t_stack **stack_b, int print);
void	swap_ss(t_stack **stack_b, t_stack **stack_a);
void	rotate_a(t_stack **stack_a, int print);
void	rotate_b(t_stack **stack_b, int print);

/* operations_stack_2.c */
void	rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	reverse_rra(t_stack **stack_a, int print);
void	reverse_rrb(t_stack **stack_b, int print);
void	reverse_rrr(t_stack **stack_a, t_stack **stack_b);

/* operations_stack_3.c */
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);

/* algorithm_1.c */
int	ft_check_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);
void	mainsort(t_stack **stack_a, t_stack **stack_b);

/* error_check.c */
int	ft_checker(int argc, char **argv);
int	already_sort(int argc, char **argv);
int	ft_alldigit(int argc, char **argv);
int	ft_doublenumber(int argc, char **argv);

/* extras.c */
void	ft_printstack(t_stack **stack_a, t_stack **stack_b);
void	ft_printnode(t_stack *node);
void	ft_print_visualize(t_stack **stack_a, t_stack **stack_b);
void	print_one_stack(t_stack **stack);

/* main.c */
void	mainfree(t_stack **start_a);
int	main(int argc, char **argv);

/* stack_utils.c */
t_stack	*ft_add_node(int num);
void	ft_populate_list(t_stack **head, int argc, char **argv);
int	num_elems(t_stack **stack);
int	node_index(t_stack **stack, long num);

/* stack_utils_1.c */
long	max_num(t_stack **stack);
long	min_num(t_stack **stack);

#endif
