/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 12:08:58 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_printstack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tempa;
	t_stack	*tempb;

	tempa = *stack_a;
	ft_printf("\n[Stack A:]\n");
	while (tempa)
	{
		ft_printf(" ([%p] %d) ->", tempa, tempa->content);
		tempa = tempa->next;
	}
	ft_printf("%p", tempa);
	tempb = *stack_b;
	ft_printf("\n\n[Stack B:]\n");
	while (tempb)
	{
		ft_printf(" ([%p] %d) ->", tempb, tempb->content);
		tempb = tempb->next;
	}
	ft_printf("%p", tempb);
}

void	ft_printnode(t_stack *node)
{
	ft_printf("\n[ PRINT NODE ]\n\n");
	ft_printf("[ %p ]\n", node);
	ft_printf("Num: %d\n", node->content);
	ft_printf("Next: %p\n", node->next);
	ft_printf("_________________\n");
}

void	ft_print_visualize(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tempa;
	t_stack	*tempb;

	tempa = *stack_a;
	tempb = *stack_b;
	ft_printf("\n\n[Stack A]\n");
	while (tempa)
	{
		ft_printf("❨ %d ❩➛", tempa->content);
		tempa = tempa->next;
	}
	ft_printf("❨ NULL ❩\n");
	ft_printf("[Stack B]\n");
	while (tempb)
	{
		ft_printf("❨ %d ❩➛", tempb->content);
		tempb = tempb->next;
	}
	ft_printf("❨ NULL ❩");
}

int	ft_power(int num, int power)
{
	int	toret;
	int i;

	i = 0;
	toret = 1;
	if (power == 0)
		return (1);
	while (i < power)
	{
		toret = toret * num;
		i++;
	}
	return (toret);
}