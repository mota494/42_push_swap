/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:39:03 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/10 16:39:04 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_target(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tempa;
	long	min;
	long	max;

	min = min_num(stack_b);
	max = max_num(stack_b);
	tempa = *stack_a;
	while (tempa)
	{
		if (tempa->content > min && tempa->content < max)
			tempa->target = min;
		else if (tempa->content < min)
			tempa->target = max;
		else if (tempa->content > max)
			tempa->target = max;
		tempa = tempa->next;
	}
}

int	times_to_rot(t_stack **stack, long num)
{
	int	toret;

	if (node_index(stack, num) <= num_elems(stack)/2)
		toret = node_index(stack, num);
	else
		toret = num_elems(stack) - node_index(stack, num);
	return (toret);
}

int	get_rot(t_stack **stack, long num)
{
	t_stack *temp;

	temp = *stack;
	while (temp)
	{
		if (temp->content == num)
			return (temp->rot_to);
		temp = temp->next;
	}
	return (0);
}

int	sim_rot(int costa, int costb)
{
	int sup;

	sup = 0;
	if (costa > costb)
		sup = costa - costb;
	else if (costb > costa)
		sup = costb - costa;
	return ((costa + costb)/2 + sup);
}

void	calc_cost_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tempa;
	int	costa;
	int	costb;

	tempa = *stack_a;
	while (tempa)
	{
		costa = times_to_rot(stack_a, tempa->content);
		costb = times_to_rot(stack_b, tempa->target);
		tempa->cost = costa + costb;
		if (both_rot(stack_a, stack_b, tempa->content, tempa->target) 
				&& (costa > 0 && costb > 0))
			tempa->cost = sim_rot(costa, costb);
		tempa = tempa->next;
	}
}
