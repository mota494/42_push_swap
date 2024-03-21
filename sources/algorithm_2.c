/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:37:41 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 16:36:48 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calc_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *t;
	int	cost;
	int	node;

	t = *stack_a;
	while(t)
	{
		node = node_index(stack_a, t->content);
		if (node > num_elems(stack_a)/2)
		{
			cost = (num_elems(stack_a) - node) + 1;
			
		}
		t = t->next;
	}
}

void	pushingb(t_stack **stack_a, t_stack **stack_b)
{
	
}
