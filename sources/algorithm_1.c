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
		swap_a(stack_a);
		return ;
	}
	while (num_elems(stack_a) != node_index(stack_a, max_num(stack_a)))
		reverse_rra(stack_a);
	if (ft_check_sort(stack_a) == 0)
		swap_a(stack_a);
}

void	get_targets(t_stack **stack_a, t_stack **stack_b)
{
	long	min;
	long	max;
	t_stack *temp;	

	push_b(stack_a, stack_b);
	push_b(stack_a, stack_b); 
	min = min_num(stack_b);
	max = max_num(stack_b);
	temp = *stack_a;
	while(temp)
	{
		if (temp->content < min)
			temp->target = min;
		else if (temp->content > min && temp->content < max)
			temp->target = min;
		else if (temp->content > max)
			temp->target = max;
		temp = temp->next;
	}
}

void	turk_algo(t_stack **stack_a, t_stack **stack_b)
{
	get_targets(stack_a, stack_b);
	calc_cost(stack_a, stack_b);
	push_to_b(stack_a, stack_b);
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
		rotate_a(stack_a);
		return ;
	}
	else
	{
		turk_algo(stack_a, stack_b);
	}
}
