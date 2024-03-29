/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:00:02 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/20 12:20:46 by mloureir         ###   ########.fr       */
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

int	get_max(t_stack **stack_a)
{
	int		max;
	t_stack	*temp;

	temp = *stack_a;
	max = 0;
	while (temp)
	{
		if (max < temp->content)
			max = temp->content;
		temp = temp->next;
	}
	return (max);
}
