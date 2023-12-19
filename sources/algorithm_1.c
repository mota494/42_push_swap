/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:49:01 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/19 17:10:07 by mloureir         ###   ########.fr       */
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
	if (ft_num_elems(stack_a) == ft_node_index(stack_a, max_num(stack_a)))
	{
		swap_a(stack_a);
		return ;
	}
	while (ft_num_elems(stack_a) != ft_node_index(stack_a, max_num(stack_a)))
		reverse_rra(stack_a);
	if (ft_check_sort(stack_a) == 0)
		swap_a(stack_a);
}

void	ft_house_it(t_stack **stack_a, t_stack **stack_b, int house)
{
	int togetmod;
	t_stack *temp;

	temp = *stack_a;
	togetmod = ft_power(10, house);

}

void	ft_send_neg(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		count;
	int		i;

	temp = *stack_a;
	count = 0;
	while(temp)
	{
		i = 0;
		if (temp->content < 0)
		{
			while (i < count)
			{
				reverse_rra(stack_a);
				i++;
			}
			push_b(stack_a, stack_b);
			count = 0;
		}
		count++;
		temp = temp->next;
	}
}

void	mainsort(t_stack **stack_a, t_stack **stack_b)
{
	int i;

	i = 0;
	if (ft_num_elems(stack_a) <= 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	ft_send_neg(stack_a, stack_b);
	ft_print_visualize(stack_a);
	ft_print_visualize(stack_b);
//	while (i < times_to_it(max_num(stack_a)))
//	{
//		ft_printf("[%d]\n", i);
//		ft_house_it(stack_a, stack_b, i + 1);
//		i++;
//	}
}
