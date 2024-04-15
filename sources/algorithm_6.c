#include "../push_swap.h"

void	push_b_lowest_cost(t_stack **stack_a, t_stack **stack_b, long num)
{
	long tar;

	tar = search_target(stack_b, num);
	if (rot_sim(stack_a, stack_b, num, tar) == 1)
		rot_both_unt(stack_a, stack_b, num, tar);
	if (node_index(stack_b, num) != 0)
		rotate_b_unt(stack_b, num);
	if (node_index(stack_a, tar) != 0)
		rotate_a_unt(stack_a, tar);
	push_a(stack_a, stack_b);
}

void	go_to_b(t_stack **stack_a, t_stack **stack_b)
{
	while (num_elems(stack_b) != 0)
	{
		if ((*stack_b)->cost == 0)
			push_a(stack_a, stack_b);
		else
		{
			push_b_lowest_cost(stack_a, stack_b, 
					get_lowest_cost(stack_b));
			
		}
		find_b_tars(stack_a, stack_b);
		get_index(stack_a);
		get_index(stack_b);
		calc_cost_a(stack_b, stack_a);	
	}
}
