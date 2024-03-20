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

int	max_num(t_stack **stack)
{
	int	max;
	t_stack	*temp;

	max = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->content > max)
			max = temp->content;
		temp = temp->next;
	}
	return (max);
}

int	min_num(t_stack **stack)
{
	int	min;
	t_stack	*temp;

	min = 0;
	temp = *stack;
	while(temp)
	{
		if (temp->content < min)
			min = temp->content;
		temp = temp->next;
	}
	return (min);
}
