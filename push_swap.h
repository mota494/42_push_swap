/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:30 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:43:10 by mloureir         ###   ########.fr       */
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
	int					index;
	int					cost;
	int					rot_to;
	struct s_stack		*next;
}			t_stack;

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
int		ft_check_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);
void	mainsort(t_stack **stack_a, t_stack **stack_b);
void	algo_start(t_stack **stack_a, t_stack **stack_b);
void	get_index(t_stack **stack);

/* algorithm_2.c */
void	first_target(t_stack **stack_a, t_stack **stack_b);
void	calc_cost_a(t_stack **stack_a, t_stack **stack_b);
int		times_to_rot(t_stack **stack, long num);
int		get_rot(t_stack **stack, long num);
int		sim_rot(int costa, int costb);

/* algorithm_3.c */
int		both_rot(t_stack **stack_a, t_stack **stack_b, long num, long target);
void	push_to_b(t_stack **stack_a, t_stack **stack_b);
long	get_lowest_cost(t_stack **stack);
void	push_lowest_cost(t_stack **stack_a, t_stack **stack_b, long num);
long	search_target(t_stack **stack, long num);

/* algorithm_4.c */
int		rot_sim(t_stack **stack_a, t_stack **stack_b, long num, long tar);
void	rot_both_unt(t_stack **a, t_stack **b, long num, long tar);
void	rotate_a_unt(t_stack **stack_a, long num);
void	rotate_b_unt(t_stack **stack_b, long num);
void	find_new_tar(t_stack **stack_a, t_stack **stack_b);

/* algorithm_5.c */
long	get_diff(long num, long tar, long oldtar);
void	back_to_a(t_stack **stack_a, t_stack **stack_b);
void	reset_costs(t_stack **stack_a, t_stack **stack_b);
void	find_b_tars(t_stack **stack_a, t_stack **stack_b);
long	get_b_diff(long num, long tar, long oldtar);

/* algorithm_6.c */
void	go_to_b(t_stack **stack_a, t_stack **stack_b);
void	org4(t_stack **stack_a, t_stack **stack_b);

/* error_check.c */
int		ft_checker(int argc, char **argv);
int		already_sort(int argc, char **argv);
int		ft_alldigit(int argc, char **argv);
int		ft_doublenumber(int argc, char **argv);
int		check_for_max(int argc, char **argv);

/* main.c */
void	mainfree(t_stack **start_a);
int		main(int argc, char **argv);

/* stack_utils.c */
t_stack	*ft_add_node(int num);
void	ft_populate_list(t_stack **head, int argc, char **argv);
int		num_elems(t_stack **stack);
int		node_index(t_stack **stack, long num);
int		relative_index(t_stack **stack, long num);

/* stack_utils_1.c */
long	max_num(t_stack **stack);
long	min_num(t_stack **stack);

#endif
