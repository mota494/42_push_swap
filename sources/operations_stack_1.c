/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:22:07 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/04 12:59:02 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*next;

	temp = *stack_a;
	next = (*stack_a)->next->next;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
	(*stack_a)->next->next = next;
	ft_printf("sa");
}

void	swap_b(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*next;

	temp = *stack_b;
	next = (*stack_b)->next->next;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = temp;
	(*stack_b)->next->next = next;
	ft_printf("sb");
}

void	swap_ss(t_stack **stack_b, t_stack **stack_a)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("ss\n");
}

void	rotate_a(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*temp;

	last = *stack_a;
	while (last->next)
	{
		last = last->next;
	}
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	last->next = temp;
	ft_printf("ra");
}

void	rotate_b(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*temp;

	last = *stack_b;
	while (last->next)
	{
		last = last->next;
	}
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	last->next = temp;
	ft_printf("rb");
}
