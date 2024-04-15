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
	if (ft_check_sort(stack_a) == 1)
		return ;
	if (num_elems(stack_a) == relative_index(stack_a, max_num(stack_a)))
	{
		swap_a(stack_a, 1);
		return ;
	}
	while (num_elems(stack_a) != relative_index(stack_a, max_num(stack_a)))
	{
		reverse_rra(stack_a, 1);
	}
	if (ft_check_sort(stack_a) == 0)
		swap_a(stack_a, 1);
}

void	mainsort(t_stack **stack_a, t_stack **stack_b)
{
	if (num_elems(stack_a) == 3)
		ft_sort_three(stack_a);
	else if (num_elems(stack_a) == 2)
		rotate_a(stack_a, 1);
	else
		algo_start(stack_a, stack_b);
}

void	algo_start(t_stack **stack_a, t_stack **stack_b)
{
	if (num_elems(stack_a) > 4)
	{
		push_b(stack_a, stack_b);
		push_b(stack_a, stack_b);
	}
	else
		push_b(stack_a, stack_a);
	get_index(stack_a);
	get_index(stack_b);
	first_target(stack_a, stack_b);
	calc_cost_a(stack_a, stack_b);
	push_to_b(stack_a, stack_b);
}

void	get_index(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	while(temp)
	{
		temp->index = node_index(stack, temp->content);
			if (temp->index <= (num_elems(stack)/2))
				temp->rot_to = 1;
			else
				temp->rot_to = 0;
		if (num_elems(stack) <= 2)
			temp->rot_to = 1;
		temp = temp->next;
	}
}
