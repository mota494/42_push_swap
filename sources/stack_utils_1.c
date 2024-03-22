/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:53 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/20 12:43:10 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	max_num(t_stack **stack)
{
	long	max;
	t_stack	*temp;

	temp = *stack;
	max = temp->content;
	while (temp)
	{
		if (temp->content > max)
			max = temp->content;
		temp = temp->next;
	}
	return (max);
}

long	min_num(t_stack **stack)
{
	long	min;
	t_stack	*temp;

	temp = *stack;
	min = temp->content;
	while(temp)
	{
		if (temp->content < min)
			min = temp->content;
		temp = temp->next;
	}
	return (min);
}

void	rotate_a_unt(t_stack **stack, long num)
{
	t_stack *temp;

	temp = *stack;
	if (temp->rot_to == 0)
	{
		while (node_index(stack, num) != 1)
		{
			reverse_rra(stack);
		}
	}
	else if (temp->rot_to == 1)
	{
	}
}
