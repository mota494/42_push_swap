/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:38:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/04 14:36:36 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	ft_printf("rr\n");
}

void	reverse_rra(t_stack **stack_a, int print)
{
	t_stack	*last;
	t_stack	*temp;

	last = *stack_a;
	temp = *stack_a;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = *stack_a;
	*stack_a = last;
	temp->next = NULL;
	if (print == 1)
		ft_printf("rra\n");
}

void	reverse_rrb(t_stack **stack_b, int print)
{
	t_stack	*last;
	t_stack	*temp;

	last = *stack_b;
	temp = *stack_b;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = *stack_b;
	*stack_b = last;
	temp->next = NULL;
	if (print == 1)
		ft_printf("rrb\n");
}

void	reverse_rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rra(stack_a, 0);
	reverse_rrb(stack_b, 0);
	ft_printf("rrr\n");
}
