/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:01:20 by mloureir          #+#    #+#             */
/*   Updated: 2024/04/15 14:01:21 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* vai dar return -1 se der erro ??? eu acho que 
 * nao da para dar erro mas nunca se sabe*/
long	get_diff(long num, long tar, long oldtar)
{
	long	toret;
	long	oldif;

	toret = num - tar;
	oldif = num-oldtar;
	if (oldif < 0 && toret > 0)
		return (tar);
	else if (oldif > 0 && toret < oldif && toret > 0)
		return (tar);
	else
		return (oldtar);
	return (-1);
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	ft_sort_three(stack_a);
	ft_printf("%ld", (*stack_b)->content);
}
