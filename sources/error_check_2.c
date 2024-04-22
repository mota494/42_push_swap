#include "../push_swap.h"

int	check_all_signals(int argc, char **argv)
{
	int	i;
	int	y;

	i = 0;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y])
		{
			if (argv[i][y] == '-' || argv[i][y] == '+')
			{
				if (argv[i][y + 1] < '0' || argv[i][y + 1] > '9')
					return (0);
			}
			y++;
		}
		i++;
	}
	return (1);
}
