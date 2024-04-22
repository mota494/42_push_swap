/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:47:22 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/17 15:39:09 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mainfree(t_stack **start_a)
{
	int		i;
	t_stack	*old_node;
	t_stack	*temp;

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

void	start_struct(t_stack **stack_a)
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp)
	{
		temp->rot_to = 0;
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*start_a;
	t_stack	*start_b;

	if (argc < 2 || check_all_signals(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (ft_checker(argc, argv) == 0)
		return (0);
	start_a = ft_add_node(ft_atoi(argv[1]));
	start_b = NULL;
	if (argc > 2)
		ft_populate_list(&start_a, argc, argv);
	mainsort(&start_a, &start_b);
	rotate_a_unt(&start_a, min_num(&start_a));
	mainfree(&start_a);
	free(start_b);
	return (0);
}
