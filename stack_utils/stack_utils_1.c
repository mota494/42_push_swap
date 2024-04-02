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

void	sort_b(t_stack **stack_b)
{
	t_stack *temp;

	temp = *stack_b;
	if (temp->content < temp->next->content)
		swap_b(stack_b);
}

int	get_rot_dir(t_stack **stack, long num)
{
	t_stack *temp;

	temp = *stack;
	while (temp)
	{
		if (temp->content == num)
			return (temp->rot_to);
		temp = temp->next;
	}
	return (2);
}

void	rotate_a_unt(t_stack **stack_a, long num)
{
	while (node_index(stack_a, num) != 1)
	{
		if (get_rot_dir(stack_a, num) == 1)
			rotate_a(stack_a, 1);
		else
			reverse_rra(stack_a, 1);
	}
}
