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

int	ft_check_sort_boxes(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->box > temp->next->box)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int ft_get_max_box(t_stack **stack)
{
	int	maxbox;

	return (maxbox);
}

void ft_actual_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	maxbox;
	while (ft_check_sort_boxes(stack_a) == 0)
	{

	}
}