/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:22:07 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:39:43 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stack **stack_a, int print)
{
	t_stack	*temp;
	t_stack	*next;

	temp = *stack_a;
	next = (*stack_a)->next->next;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
	(*stack_a)->next->next = next;
	if (print == 1)
		ft_printf("sa\n");
}

void	swap_b(t_stack **stack_b, int print)
{
	t_stack	*temp;
	t_stack	*next;

	temp = *stack_b;
	next = (*stack_b)->next->next;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = temp;
	(*stack_b)->next->next = next;
	if (print == 1)
		ft_printf("sb\n");
}

void	swap_ss(t_stack **stack_b, t_stack **stack_a)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	ft_printf("ss\n");
}

void	rotate_a(t_stack **stack_a, int print)
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
	if (print == 1)
		ft_printf("ra\n");
}

void	rotate_b(t_stack **stack_b, int print)
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
	if (print == 1)
		ft_printf("rb\n");
}
