/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:37:41 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 14:34:09 by mloureir         ###   ########.fr       */
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

void ft_actual_sort(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_check_sort_boxes(stack_a) == 0)
	{
		if ((*stack_a)->next)
		{
			if ((*stack_a)->box > (*stack_a)->next->box)
			{
				push_b(stack_a, stack_b);
				reverse_rra(stack_a);
				ft_print_visualize(stack_a, stack_b);
			}
			else if((*stack_a)->box <= (*stack_a)->next->box)
			{
				reverse_rra(stack_a);
				ft_print_visualize(stack_a, stack_b);
			}
		}
		if (*stack_b)
		{
			if ((*stack_b)->box > (*stack_a)->box)
			{
				push_a(stack_a, stack_b);
				reverse_rra(stack_a);
				ft_print_visualize(stack_a, stack_b);
			}
		}
	}
}