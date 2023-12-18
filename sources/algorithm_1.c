/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:49:01 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/18 16:50:47 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_medium(t_stack **stack_a)
{
	int medium;
	int count;
	t_stack *temp;

	temp = *stack_a;
	count = 0;
	medium = 0;
	while (temp)
	{
		medium += temp->content;
		count++;
		temp = temp->next;
	}
	medium /= count;
	return (medium);
}

void	bellow_med(t_stack **stack_a, t_stack **stack_b, int medium)
{
	t_stack *temp;

	temp = *stack_a;
	while(temp)
	{

	}
}

void	mainsort(t_stack **stack_a, t_stack **stack_b)
{
	bellow_med(stack_a, stack_b, get_medium(stack_a));
	ft_print_visualize(stack_b);
}
