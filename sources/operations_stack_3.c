/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:00:02 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:40:11 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*snext;

	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (!stack_a)
	{
		*stack_a = temp;
		(*stack_a)->next = NULL;
	}
	else
	{
		snext = *stack_a;
		*stack_a = temp;
		(*stack_a)->next = snext;
	}
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*snext;

	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (!stack_b)
	{
		*stack_b = temp;
		(*stack_b)->next = NULL;
	}
	else
	{
		snext = *stack_b;
		*stack_b = temp;
		(*stack_b)->next = snext;
	}
	ft_printf("pb\n");
}
