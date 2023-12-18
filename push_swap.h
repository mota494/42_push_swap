/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/18 15:31:39 by mloureir         ###   ########.fr       */
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
int		ft_get_node_index(t_stack **stack, int num);
int		ft_get_num_elems(t_stack **stack);
int		ft_get_num_index(t_stack **stack, int num);

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

/* Algorithm */
void	mainsort(t_stack **stack_a, t_stack **stack_b);
int		get_medium(t_stack **stack_a);
void	bellow_med(t_stack **stack_a, t_stack **stack_b, int medium);

/* Extras */
void	ft_printstack(t_stack **stack_a, t_stack **stack_b);
void	ft_printnode(t_stack *node);
void	ft_print_visualize(t_stack **stack);

#endif
