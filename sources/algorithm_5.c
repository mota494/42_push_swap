/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:01:20 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:23:10 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* vai dar return -1 se der erro ??? eu acho que 
 * nao da para dar erro mas nunca se sabe*/
long	get_diff(long num, long tar, long oldtar)
{
	long	toret;
	long	oldif;

	toret = num - tar;
	oldif = num - oldtar;
	if (oldif < 0 && toret > 0)
		return (tar);
	else if (oldif > 0 && toret < oldif && toret > 0)
		return (tar);
	else
		return (oldtar);
	return (-1);
}

void	reset_costs(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = *stack_b;
	while (temp)
	{
		temp->target = (*stack_a)->content;
		temp = temp->next;
	}
}

long	get_b_diff(long num, long tar, long oldtar)
{
	long	toret;
	long	oldif;

	toret = tar - num;
	oldif = oldtar - num;
	if (oldif < 0 && toret > 0)
		return (tar);
	else if (oldif > 0 && toret < oldif && toret > 0)
		return (tar);
	else
		return (oldtar);
}

void	find_b_tars(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = *stack_b;
	while (temp_b)
	{
		temp_a = *stack_a;
		if (temp_b->content > max_num(stack_a) || temp_b->content < min_num
			(stack_a))
			temp_b->target = min_num(stack_a);
		else
		{
			while (temp_a)
			{
				temp_b->target = get_b_diff(temp_b->content,
						temp_a->content,
						temp_b->target);
				temp_a = temp_a->next;
			}
		}
		temp_b = temp_b->next;
	}
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	ft_sort_three(stack_a);
	reset_costs(stack_a, stack_b);
	find_b_tars(stack_a, stack_b);
	get_index(stack_a);
	get_index(stack_b);
	calc_cost_a(stack_b, stack_a);
	go_to_b(stack_a, stack_b);
}
