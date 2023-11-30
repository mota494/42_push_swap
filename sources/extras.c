/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 17:07:55 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_printstack(t_stack *head)
{
	t_stack *temp;

	temp = head;
	ft_printf("\n[ PRINT STACK ]\n\n");
	 while(temp)
	 {
		 ft_printf("[ %p ]\n", temp);
		 ft_printf("Num: %d\n", temp->content);
		 ft_printf("Next: %p\n", temp->next);
		 ft_printf("_________________\n");
		 temp = temp->next;
	 }
}

void	ft_printnode(t_stack *node)
{
	ft_printf("\n[ PRINT NODE ]\n\n");
	ft_printf("[ %p ]\n", node);
	ft_printf("Num: %d\n", node->content);
	ft_printf("Next: %p\n", node->next);
	ft_printf("_________________\n");
}

int	ft_errorcheck(int argc, char **argv)
{
	return (1);
}