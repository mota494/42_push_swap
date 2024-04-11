#include "../push_swap.h"

int	both_rot(t_stack **stack_a, t_stack **stack_b, long num, long target)
{
	if (get_rot(stack_a, num) == get_rot(stack_b, target))
		return (1);
	return (0);
}
