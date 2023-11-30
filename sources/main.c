/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:47:22 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/30 17:06:38 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	t_stack *start_a;
	t_stack *start_b;

	if (argc < 2)
		return (0);

	start_a = ft_add_node(ft_atoi(argv[1]));
	start_b = NULL;
	if (argc > 2)
		ft_populate_list(&start_a, argc, argv);
	return (0);
}