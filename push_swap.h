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

/* List functions */
void	ft_populate_list(t_stack **head, int argc, char **argv);
t_stack	*ft_add_node(int num);
int		num_elems(t_stack **stack);
long		max_num(t_stack **stack);
long		min_num(t_stack **stack);
int		node_index(t_stack **stack, long num);

/* Operations Stack A */
void	swap_a(t_stack **stack_a);
void	rotate_a(t_stack **stack_a);
void	reverse_rra(t_stack **stack_a);
void	push_a(t_stack **stack_a, t_stack **stack_b);

/* Operations Stack B */
void	swap_b(t_stack **stack_b);
void	rotate_b(t_stack **stack_b);
void	reverse_rrb(t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);

/* Operations both stacks */
void	swap_ss(t_stack **stack_b, t_stack **stack_a);
void	rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	reverse_rrr(t_stack **stack_a, t_stack **stack_b);

/* Error checks */
int		ft_doublenumber(int argc, char **argv);
int		ft_checker(int argc, char **argv);
int		ft_alldigit(int argc, char **argv);
int		already_sort(int argc, char **argv);
int		ft_power(int num, int power);

/* Algorithm */
void	mainsort(t_stack **stack_a, t_stack **stack_b);
int		ft_check_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);
void	get_targets(t_stack **stack_a, t_stack **stack_b);	
void	turk_algo(t_stack **stack_a, t_stack **stack_b);
void	calc_cost(t_stack **stack_a, t_stack **stack_b);
int	get_b_cost(long target, int a_cost,t_stack **stack_b);
long	get_lowest_cost(t_stack **stack);
void	sort_b(t_stack **stack_b);
void	main_algo(t_stack **stack_a, t_stack **stack_b);
void	push_lowest_cost(t_stack **stack_a, t_stack **stack_b);	
void	rotate_a_unt(t_stack **stack_a, long num);
void	rotate_b_unt(t_stack **stack_b, long num);
int	get_rot_dir(t_stack **stack, long num);
long	get_lowest_target(t_stack **stack, long num);
int	check_rot(t_stack **stack_a, t_stack **stack_b, long num, long tar);
void	rotate_both_dir(t_stack **stack_a, t_stack **stack_b, long num);	
void	get_rot_info(t_stack **stack);
void	recalc_targets(t_stack **stack_a, t_stack **stack_b);

/* Extras */
void	ft_printstack(t_stack **stack_a, t_stack **stack_b);
void	ft_printnode(t_stack *node);
void	ft_print_visualize(t_stack **stack_a, t_stack **stack_b);

#endif
