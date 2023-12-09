/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/06 15:47:18 by mloureir         ###   ########.fr       */
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
