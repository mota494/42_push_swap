/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:04:39 by mloureir          #+#    #+#             */
/*   Updated: 2024/03/25 17:04:43 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	get_lowest_target(t_stack **stack_b, long num)
{
	t_stack *temp;

	temp = *stack_b;
	while (temp)
	{
		if (temp->content == num)
			return (temp->target);
		temp = temp->next;
	}
	return (2);
}

int	check_rot(t_stack **stack_a, t_stack **stack_b, long num, long tar)
{
	if (node_index(stack_a, num) != 1 || )
}
