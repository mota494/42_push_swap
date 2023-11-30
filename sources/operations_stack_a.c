/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:22:07 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 16:58:29 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_a(t_stack **stack_a)
{
	t_stack *temp;
	t_stack *next;

	temp = *stack_a;
	next = (*stack_a)->next->next;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
	(*stack_a)->next->next = next;
}

void    swap_b(t_stack **stack_b)
{
	t_stack *temp;
	t_stack *next;

	temp = *stack_b;
	next = (*stack_b)->next->next;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = temp;
	(*stack_b)->next->next = next;
}