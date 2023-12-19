/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/19 15:57:27 by mloureir         ###   ########.fr       */
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
	int				content;
	struct s_stack	*next;
}					t_stack;

/* List functions */
void	ft_populate_list(t_stack **head, int argc, char **argv);
t_stack	*ft_add_node(int num);
int		ft_node_index(t_stack **stack, int num);
int		ft_num_elems(t_stack **stack);
int		ft_get_num_index(t_stack **stack, int num);
int		max_num(t_stack **stack);

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
int		times_to_it(int num);
void	ft_send_neg(t_stack **stack_a, t_stack **stack_b);
void	ft_house_it(t_stack **stack_a, t_stack **stack_b, int house);

/* Extras */
void	ft_printstack(t_stack **stack_a, t_stack **stack_b);
void	ft_printnode(t_stack *node);
void	ft_print_visualize(t_stack **stack);

#endif
