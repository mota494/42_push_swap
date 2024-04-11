#include "../push_swap.h"

int	both_rot(t_stack **stack_a, t_stack **stack_b, long num, long target)
{
	if (get_rot(stack_a, num) == get_rot(stack_b, target))
		return (1);
	return (0);
}

long	get_lowest_cost(t_stack **stack)
{
	int	min;
	t_stack	*temp;

	min = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->cost == 1)
			break ;
		if (temp->cost < min)
		{
			min = temp->cost;
			break;
		}
		temp = temp->next;
	}
	return (temp->content);
}

long	search_target(t_stack **stack, long num)
{
	t_stack *temp;

	temp = *stack;
	while (temp)
	{
		if (temp->content == num)
			return (temp->target);
		temp = temp->next;
	}
	return (-1);
}

void	push_lowest_cost(t_stack **stack_a, t_stack **stack_b, long num)
{
	long tar;

	tar = search_target(stack_a, num);
	if (rot_sim(stack_a, stack_b, num, tar) == 1)
	{
 		rot_both_unt(stack_a, stack_b, num, tar);
	}
	if (node_index(stack_a, num) != 0)
		rotate_a_unt(stack_a, num);
	if (node_index(stack_b, num) != 0)
		rotate_b_unt(stack_b, tar);
	push_b(stack_a, stack_b);
}

void	push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	/*while (num_elems(stack_a) != 3)
	{*/
		if ((*stack_a)->cost == 0)
			push_b(stack_a, stack_b);
		else
		{
			push_lowest_cost(stack_a, stack_b, 
					get_lowest_cost(stack_a));
		}
		ft_print_visualize(stack_a, stack_b);
	/*}*/
}