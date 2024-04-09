/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:49:01 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 13:12:15 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_sort(t_stack **stack_a)
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	ft_sort_three(t_stack **stack_a)
{
	if (num_elems(stack_a) == node_index(stack_a, max_num(stack_a)))
	{
		swap_a(stack_a, 1);
		return ;
	}
	while (num_elems(stack_a) != node_index(stack_a, max_num(stack_a)))
		reverse_rra(stack_a, 1);
	if (ft_check_sort(stack_a) == 0)
		swap_a(stack_a, 1);
}

void	mainsort(t_stack **stack_a, t_stack **stack_b)
{
	if (num_elems(stack_a) == 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	else if (num_elems(stack_a) == 2)
	{
		rotate_a(stack_a, 1);
		return ;
	}
}
