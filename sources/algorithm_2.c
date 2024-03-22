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
			t->rot_to = 0;
		}
		else
		{
			cost = node;
			cost = get_b_cost(t->target, cost, stack_b);
			t->cost = cost;
			t->rot_to = 1;
		}
		t = t->next;
	}
}

long	get_lowest_cost(t_stack **stack)
{
	int	min;
	long	toret;
	t_stack *temp;

	temp = *stack;
	min = temp->cost;
	while (temp)
	{
		if (temp->cost < min)
		{
			min = temp->cost;
			toret = temp->content;
		}
		temp = temp->next;
	}
	return (toret);
}

void	push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int get;

	while (num_elems(stack_a) > 0)
	{
		rotate_a_unt(stack_a, get_lowest_cost(stack_a));
	}
}
