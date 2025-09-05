/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:42:35 by abita             #+#    #+#             */
/*   Updated: 2025/09/02 20:44:37 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    THE FUNCTIONS FOR THIS FILE:

    sa (swap a): Swap the first 2 elements at the top of stack a.
                 Do nothing if there is only one element or none.
    sb (swap b): Swap the first 2 elements at the top of stack b.
                 Do nothing if there is only one element or none.
    ss : sa and sb at the same time.
*/

static int swap_stack(t_stack *stack)
{
    int temp;

    if (stack->size < 2)
        return (-1);
    temp = stack->collection[0];
    stack->collection[0] = stack->collection[1];
    stack->collection[1] = temp;
    return (0);
}
int sa(t_stack *a)
{
    return (write(1, "sa\n", 3), swap_stack(a));
}
int sb(t_stack *b)
{
    return (write(1, "sb\n", 3), swap_stack(b));
}
int ss(t_stack *a, t_stack *b)
{
    int stack_a;
    int stack_b;

    stack_a = swap_stack(a);
    stack_b = swap_stack(b);
    if (stack_a == 0 && stack_b == 0)
        return (write(1, "ss\n", 3), 0);
    return (-1);
}
