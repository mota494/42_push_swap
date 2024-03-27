/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:42:03 by mloureir          #+#    #+#             */
/*   Updated: 2024/03/27 15:42:04 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	recalc_targets(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	int	diff;
	int	oldiff;

	temp_a = *stack_a;
	while (temp_a)
	{
		temp_b = *stack_b;
		while (temp_b)
		{
			oldiff = temp_a->content - temp_a->target;
			diff = temp_a->content - temp_b->content;
			if (diff > 0 && diff < oldiff)
				temp_a->target = temp_b->content;
			temp_b = temp_b->next;
		}
		temp_a = temp_a->next;
	}
}

