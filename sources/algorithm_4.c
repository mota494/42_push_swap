#include "../push_swap.h"

int	rot_sim(t_stack **stack_a, t_stack **stack_b, long num, long tar)
{
	if (get_rot(stack_a, num) == get_rot(stack_b, tar))
	{
		if (node_index(stack_a, num) != 0 && node_index(stack_b, tar) 
				!= 0)
			return (1);
	}
	return (0);
}

void	rot_both_unt(t_stack **a, t_stack **b, long num, long tar)
{
	int	rot_info;

	rot_info = get_rot(a, num);
	if (rot_info == 1)
	{
		while (node_index(a, num) != 0 && node_index(b, tar) != 0)
		{
			rotate_rr(a, b);
		}
	}
	else
	{
		while (node_index(a, num) != 0 && node_index(b, tar) != 0)
		{
			reverse_rrr(a, b);
		}
	}
}

void	rotate_a_unt(t_stack **stack_a, long num)
{
	int	rot_info;

	rot_info = get_rot(stack_a, num);
	while (node_index(stack_a, num) != 0)
	{
		if (rot_info == 1)
			rotate_a(stack_a, 1);
		else
			reverse_rra(stack_a, 1);
	}
}

void	rotate_b_unt(t_stack **stack_b, long num)
{
	int	rot_info;

	rot_info = get_rot(stack_b, num);
	while (node_index(stack_b, num) != 0)
	{
		if (rot_info == 1)
			rotate_b(stack_b, 1);
		else
			reverse_rrb(stack_b, 1);
	}
}

void	find_new_tar(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *stack_a;
	while (temp_a)
	{
		temp_b = *stack_b;
		if (temp_a->content > max_num(stack_b) || temp_a->content < 
				min_num(stack_b))
			temp_a->target = max_num(stack_b);
		else
		{
			while (temp_b)
			{
				temp_a->target = get_diff(temp_a->content, 
						temp_b->content, 
						temp_a->target); 
				temp_b = temp_b->next;
			}
		}
		temp_a = temp_a->next;
	}
}
