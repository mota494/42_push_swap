/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/05 10:39:21 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_printstack(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tempA;
	t_stack *tempB;

	tempA = stack_a;
	ft_printf("\n[Stack A:]\n");
	while (tempA)
	{
		ft_printf(" ([%p] %d) ->", tempA, tempA->content);
		tempA = tempA->next;
	}
	ft_printf("%p", tempA);
	tempB = stack_b;
	ft_printf("\n\n[Stack B:]\n");
	while (tempB)
	{
		ft_printf(" ([%p] %d) ->", tempB, tempB->content);
		tempB = tempB->next;
	}
	ft_printf("%p", tempB);
}

void	ft_printnode(t_stack *node)
{
	ft_printf("\n[ PRINT NODE ]\n\n");
	ft_printf("[ %p ]\n", node);
	ft_printf("Num: %d\n", node->content);
	ft_printf("Next: %p\n", node->next);
	ft_printf("_________________\n");
}
