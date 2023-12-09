/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:51:19 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/09 10:44:46 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_add_node(int num)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->content = num;
	new_node->next = NULL;
	return (new_node);
}

void	ft_populate_list(t_stack **head, int argc, char **argv)
{
	t_stack	*temp;
	int		i;

	temp = *head;
	i = 2;
	while (i < argc)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ft_add_node(ft_atoi(argv[i]));
		i++;
	}
}

int	ft_get_node_index(t_stack **stack, int num)
{
	int		count;
	t_stack	*temp;

	temp = *stack;
	count = 0;
	while (temp)
	{
		if (temp->content == num)
			return (count);
		temp = temp->next;
		count++;
	}
	return (count);
}

int	ft_get_num_elems(t_stack **stack)
{
	int		count;
	t_stack	*temp;

	count = 0;
	temp = *stack;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

int	ft_get_num_index(t_stack **stack, int num)
{
	int		count;
	t_stack	*temp;

	temp = *stack;
	count = 1;
	while (temp)
	{
		if (temp->content == num)
			return (count);
		temp = temp->next;
		count++;
	}
	return (count);
}
