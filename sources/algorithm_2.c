/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:37:41 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 16:36:48 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_b_cost(long target, int cost, t_stack **stack_b)
{
	int	toret;
	int	node;

	node = node_index(stack_b, target);
	if (node > num_elems(stack_b)/2)
		toret = cost + (num_elems(stack_b) - node) + 1;
	else
		toret = cost + node;
	return (toret);
}

void	calc_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *t;
	int	cost;
	int	node;

	t = *stack_a;
	while(t)
	{
		node = node_index(stack_a, t->content);
		if (node > (num_elems(stack_a))/2)
		{
			cost = (num_elems(stack_a) - node) + 1;
			cost = get_b_cost(t->target, cost, stack_b);
			t->cost = cost;
		}
		else
		{
			cost = node;
			cost = get_b_cost(t->target, cost, stack_b);
		}
		t = t->next;
	}
}
