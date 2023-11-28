/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:22:07 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/27 12:23:26 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_a(t_stack **start_a)
{
    t_stack *temp;

    temp->content = (*start_a)->content;
    temp->next = (*start_a)->next;
    *start_a->content = (*start_a)->next->content;
    *start_a->next = (*start_a)->next->next;
    *start_a->next->next = temp->next;
    *start_a->next->content = temp->content;
}