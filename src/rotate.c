/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:41:31 by abita             #+#    #+#             */
/*   Updated: 2025/09/02 20:41:32 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    THE FUNCTIONS FOR THIS FILE:

    ra (rotate a): Shift up all elements of stack a by 1.
                   The first element becomes the last one.
    rb (rotate b): Shift up all elements of stack b by 1.
                   The first element becomes the last one.
    rr : ra and rb at the same time.
*/

static int rotate_stack(t_stack *stack)
{
    int i;
    int tmp;

    if (stack->size == 0)
        return (-1);
    i = 0;
    tmp = stack->collection[0];
    while (i < stack->size - 1)
    {
        stack->collection[i] = stack->collection[i + 1];
        i++;
    }
    stack->collection[stack->size - 1] = tmp; 
    return (0);
}
int ra(t_stack *a)
{
    return (rotate_stack(a));
}

int rb(t_stack *b)
{
    return(rotate_stack(b));
}
int rr(t_stack *a, t_stack *b)
{
    int stack_a;
    int stack_b;

    stack_a = rotate_stack(a);
    stack_b = rotate_stack(b);
    if (stack_a == 0 && stack_b == 0)
        return (0);
    return (-1);
}
