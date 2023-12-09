/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:49:01 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/09 10:44:35 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ft_set_max_last(t_stack **stack_a, int maxindex)
{
	int	i;

	i = 0;
	while (i < maxindex)
	{
		reverse_rra(stack_a);
		i++;
	}
}

void	mainsort(t_stack **stack_a, t_stack **stack_b)
{
	int	max;

	max = get_max(stack_a);
	if (ft_get_num_index(stack_a, max) != ft_get_num_elems(stack_a))
		ft_set_max_last(stack_a, ft_get_num_index(stack_a, max));
	ft_printstack(stack_a, stack_b);
}
