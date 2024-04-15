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
