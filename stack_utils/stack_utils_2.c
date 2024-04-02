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
	if (get_rot_dir(stack_a, num) != get_rot_dir(stack_b, tar))
		return (0);
	if (node_index(stack_a, num) != 1 && node_index(stack_b, tar) != 1)
		return (1);
	else
		return (0);
}

void	rotate_both_dir(t_stack **stack_a, t_stack **stack_b, long num)
{
	if (get_rot_dir(stack_a, num) == 1)
		rotate_rr(stack_a, stack_b);
	else
		reverse_rrr(stack_a, stack_b);
}

void	rotate_b_unt(t_stack **stack_b, long num)
{
	while (node_index(stack_b, num) != 1)
	{
		if (get_rot_dir(stack_b, num) == 1)
			rotate_b(stack_b, 1);
		else
			reverse_rrb(stack_b, 1);
	}
}

void	get_rot_info(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	while (temp)
	{
		if (node_index(stack, temp->content) <= num_elems(stack)/2)
			temp->rot_to = 1;
		else
			temp->rot_to = 0;
		temp = temp->next;
	}
}
