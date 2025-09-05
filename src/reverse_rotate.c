/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:39:15 by abita             #+#    #+#             */
/*   Updated: 2025/09/02 20:40:52 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    THE FUNCTIONS FOR THIS FILE:

    rra (reverse rotate a): Shift down all elements of stack a by 1.
                            The last element becomes the first one.
    rrb (reverse rotate b): Shift down all elements of stack b by 1.
                            The last element becomes the first one.
    rrr : rra and rrb at the same time.
*/

static int reverse_rotate(t_stack *stack)
{
    int end;
    int tmp;

    if (stack->size == 0)
        return (-1);
    end = stack->size - 1;
    tmp = stack->collection[end];
    while (end > 0)
    {
        stack->collection[end] = stack->collection[end - 1];
        end--;
    }
    stack->collection[0] = tmp;
    return (0);
}
int rra(t_stack *a)
{
    return (write(1, "rra\n", 4), reverse_rotate(a));
}
int rrb(t_stack *b)
{
    return (write(1, "rrb\n", 4), reverse_rotate(b));
}
int rrr(t_stack *a, t_stack *b)
{
    int stack_a;
    int stack_b;

    stack_a = reverse_rotate(a);
    stack_b = reverse_rotate(b);
    if (stack_a == 0 && stack_b == 0)
        return (write(1, "rrr\n", 4), 0);
    return (-1);
}
