/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:51:19 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 11:57:50 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../include/libft/libft.h"

t_stack *ft_start_list(int num)
{
	t_stack *first_node;

	first_node = malloc(sizeof(t_stack));
	if(!first_node)
		return NULL;
	first_node->content = num;
	first_node->next = NULL;
	first_node->prev = NULL;
	return (first_node);
}

t_stack	*ft_add_node(int num, t_stack **prev)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack));
	if(!new_node)
		return NULL;
	new_node->prev = *prev;
	new_node->next = NULL;
	new_node->content = num;
	return (new_node);
}

void	ft_populate_list(t_stack **head, int argc, char **argv)
{
	t_stack *temp;
	int		i;

	temp = *head;
	i = 2;
	while(i < argc)
	{
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = ft_add_node(ft_atoi(argv[i]), &temp);
		i++;
	}
}