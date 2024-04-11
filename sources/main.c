/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:47:22 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/21 12:09:21 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mainfree(t_stack **start_a)
{
	int i;
	t_stack *old_node;
	t_stack *temp;
	
	temp = *start_a;
	i = num_elems(start_a);
	while (i > 0)
	{
		old_node = temp;
		temp = temp->next;
		free(old_node);
		i--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*start_a;
	t_stack	*start_b;

	if (argc < 2 || ft_checker(argc, argv) == 0)
		return (0);
	start_a = ft_add_node(ft_atoi(argv[1]));
	start_b = NULL;
	if (argc > 2)
		ft_populate_list(&start_a, argc, argv);
	mainsort(&start_a, &start_b);
	mainfree(&start_a);
	free(start_b);
	return (0);
}
