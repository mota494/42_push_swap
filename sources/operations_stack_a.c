/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:22:07 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 13:47:02 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_a(t_stack **stack_a)
{
	t_stack	*temp;

	temp = (*stack_a)->next->next;
	if (temp)
		temp->prev = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->prev;
	(*stack_a)->next->next = temp;
	(*stack_a)->next->prev = *stack_a;
	(*stack_a)->prev = NULL;
}

void    swap_b(t_stack **stack_b)
{
	t_stack	*temp;

	temp = (*stack_b)->next->next;
	if (temp)
		temp->prev = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->prev;
	(*stack_b)->next->next = temp;
	(*stack_b)->next->prev = *stack_b;
	(*stack_b)->prev = NULL;
}