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

int	get_dif(long num, long orig_targ,long target)
{
	long diff;
	long oldiff;

	oldiff = num - orig_targ;
	diff = num - target;
	if (diff < oldiff && diff > 0 && num > target)
		return (1);
	else if (oldiff < 0 && diff > 0 && num > target)
		return (1);
	return (0);
}

void	recalc_targets(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp_a;
	t_stack *temp_b;

	temp_a = *stack_a;
	while (temp_a)
	{
		temp_b = *stack_b;
		if (temp_a->content < min_num(stack_b))
			temp_a->target = min_num(stack_b);
		else if (temp_a->content > max_num(stack_b))
			temp_a->target = max_num(stack_b);
		else	
		{
			while (temp_b)
			{
				
				if(get_dif(temp_a->content, temp_a->target
							, temp_b->content) == 1)
					temp_a->target = temp_b->content;
				temp_b = temp_b->next;
			}
		}
		temp_a = temp_a->next;
	}
}
