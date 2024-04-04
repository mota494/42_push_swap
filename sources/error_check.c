/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:05:30 by mloureir          #+#    #+#             */
/*   Updated: 2023/12/06 15:17:21 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checker(int argc, char **argv)
{
	int	i;

	i = ft_doublenumber(argc, argv);
	if (i == 0)
	{
		ft_printf("ERROR!");
		return (i);
	}
	i = ft_alldigit(argc, argv);
	if (i == 0)
	{
		ft_printf("ERROR!");
		return (i);
	}
	i = already_sort(argc, argv);
	if (i == 0)
	{
		ft_printf("Already sorted");
		return (i);
	}
	return (i);
}

int	already_sort(int argc, char **argv)
{
	int	i;
	long	curnum;

	i = 2;
	while (i < argc)
	{
		curnum = ft_atoi(argv[i]);
		if (curnum > ft_atoi(argv[i - 1]))
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_alldigit(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	while (i < argc)
	{
		p = 0;
		while (argv[i][p] != '\0')
		{
			if (argv[i][p] == '-' || argv[i][p] == '+')
				p++;
			else if (ft_isdigit(argv[i][p]) == 0)
				return (0);
			else
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
			{
				checker++;
			}
			if (checker > 1)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}
