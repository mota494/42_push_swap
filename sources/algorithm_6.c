/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:54:26 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:27:17 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b_lowest_cost(t_stack **stack_a, t_stack **stack_b, long num)
{
	long	tar;

	tar = search_target(stack_b, num);
	if (rot_sim(stack_a, stack_b, num, tar) == 1)
		rot_both_unt(stack_b, stack_a, num, tar);
	if (node_index(stack_b, num) != 0)
		rotate_b_unt(stack_b, num);
	if (node_index(stack_a, tar) != 0)
		rotate_a_unt(stack_a, tar);
	push_a(stack_a, stack_b);
}

void	go_to_b(t_stack **stack_a, t_stack **stack_b)
{
	while (num_elems(stack_b) != 0)
	{
		if ((*stack_b)->cost == 0)
			push_a(stack_a, stack_b);
		else
		{
			push_b_lowest_cost(stack_a, stack_b, get_lowest_cost(stack_b));
		}
		find_b_tars(stack_a, stack_b);
		get_index(stack_a);
		get_index(stack_b);
		calc_cost_a(stack_b, stack_a);
	}
}

void	org4(t_stack **stack_a, t_stack **stack_b)
{
	push_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	if ((*stack_b)->content < min_num(stack_a))
		push_a(stack_a, stack_b);
	else if ((*stack_b)->content > max_num(stack_a))
		push_a(stack_a, stack_b);
	else
	{
		if ((*stack_b)->content > (*stack_a)->next->content)
		{
			rotate_a_unt(stack_a, max_num(stack_a));
			push_a(stack_a, stack_b);
		}
		else
		{
			rotate_a(stack_a, 1);
			push_a(stack_a, stack_b);
		}
	}
}
