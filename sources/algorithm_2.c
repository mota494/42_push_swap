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
			cost = num_elems(stack_a) - node;
			cost = get_b_cost(t->target, cost, stack_b);
			t->cost = cost - 1;
		}
		else
		{
			cost = node;
			cost = get_b_cost(t->target, cost, stack_b);
			t->cost = cost - 2;
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
		if (temp->cost <= min)
		{
			min = temp->cost;
			toret = temp->content;
		}
		temp = temp->next;
	}
	return (toret);
}

void	push_lowest_cost(t_stack **stack_a, t_stack **stack_b)
{
	long	num;
	long	target;

	num = get_lowest_cost(stack_a);
	target = get_lowest_target(stack_a, num);
	if (node_index(stack_a, num) != 1 && node_index(stack_b, target) != 1)
	{
		while (check_rot(stack_a, stack_b, num, target) == 1)
			rotate_both_dir(stack_a, stack_b, num, target);
	}
	if (node_index(stack_a, num) != 1)	
		rotate_a_unt(stack_a, num);
	if (node_index(stack_b, target) != 1)
		rotate_b_unt(stack_b, target);
	if (node_index(stack_a, num) == 1 && node_index(stack_b, target) == 1)
		push_b(stack_a, stack_b);
	if (num < target)
		swap_b(stack_b, 1);
}

void	main_algo(t_stack **stack_a, t_stack **stack_b)
{
	while (num_elems(stack_a) != 3)
	{
		if ((*stack_a)->cost == 0)
			push_b(stack_a, stack_b);
		else
			push_lowest_cost(stack_a, stack_b);
		recalc_targets(stack_a, stack_b);
		get_rot_info(stack_a);
		get_rot_info(stack_b);
		calc_cost(stack_a, stack_b);
	}
}
