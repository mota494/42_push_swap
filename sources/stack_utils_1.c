/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:53 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/20 12:43:10 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_num(t_stack **stack)
{
	int		max;
	t_stack	*temp;

	max = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->content > max)
			max = temp->content;
		temp = temp->next;
	}
	return (max);
}

int times_to_it(int num)
{
	int i;
	int	count;

	i = num;
	count = 0;
	while(i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

void rotate_untill(t_stack **stack, int num) {
	int pos;

	pos = ft_get_num_index(stack, num);
	if (pos > ft_num_elems(stack) / 2)
	{
		while ((*stack)->content != num)
		{
			reverse_rra(stack);
		}
	}
	else
	{
		while ((*stack)->content != num)
		{
			rotate_a(stack);
		}
	}
}