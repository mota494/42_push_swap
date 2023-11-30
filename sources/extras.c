/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 17:17:41 by mloureir         ###   ########.fr       */
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
	int i;
	int y;
	int checker;

	i = 1;
	while(i < argc)
	{
		checker = 0;
		y = 1;
			while(y < argc)
			{
				if(ft_atoi(argv[y]) == ft_atoi(argv[i]))
					checker++;
				if(checker > 1)
				{
					ft_printf("!ERROR!");
					return (0);
				}
				y++;
			}
		i++;
	}
	return (1);
}