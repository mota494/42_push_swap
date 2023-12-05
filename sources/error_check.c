/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:05:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:54 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checker(int argc, char **argv)
{
	int i;

	i = ft_doublenumber(argc, argv);
	if (i == 0)
	{
		printf("ERROR!");
		return (i);
	}
	i = ft_alldigit(argc, argv);
	if (i == 0)
	{
		printf("ERROR!");
		return (i);
	}
	return (i);
}

int	ft_alldigit(int argc, char **argv)
{
	int	i;
	int p;

	i = 1;
	p = 0;
	while(i < argc)
	{
		while(argv[i][p] != '\0')
		{
			if (ft_isdigit(argv[i][p]) == 0)
				return (0);
			p++;
		}
		i++;
	}
	return (1);
}

int	ft_doublenumber(int argc, char **argv)
{
	int	i;
	int	y;
	int	checker;

	i = 1;
	while (i < argc)
	{
		checker = 0;
		y = 1;
		while (y < argc)
		{
			if (ft_atoi(argv[y]) == ft_atoi(argv[i]))
				checker++;
			if (checker > 1)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}