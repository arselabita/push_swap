/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:42:26 by abita             #+#    #+#             */
/*   Updated: 2025/09/02 20:42:27 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    THE FUNCTIONS FOR THIS FILE:

    pa (push a): Take the first element at the top of b and put it at the top of a.
                 Do nothing if b is empty.
    pb (push b): Take the first element at the top of a and put it at the top of b.
                 Do nothing if a is empty.
*/

int pb(t_stack *a, t_stack *b)
{
    int i;

    if (a->size == 0)
        return (-1);
    if (b->size >= b->capacity)
        return (-1);
    // i do this to create space at the top of my stack
    i = b->size;
    while (i > 0) 
    {
        b->collection[i] = b->collection[i - 1];
        i--;
    }
    b->collection[0] = a->collection[0];
    b->size++;
    // now i need to remove the top element
    i = 0;
    while (i < a->size - 1)
    {
        a->collection[i] = a->collection[i + 1];
        i++;
    }
    a->size--;
    return (0);
}
int pa(t_stack *a, t_stack *b)
{
    int i;

    // if there isnt anything just in anycase ...
    if (b->size == 0)
        return (-1);
    if (a->size >= a->capacity)
        return (-1);
    i = a->size;
    // i do this to create space at the top of my stack
    while (i > 0) 
    {
        a->collection[i] = a->collection[i - 1];
        i--;
    }
    a->collection[0] = b->collection[0];
    a->size++;
    // now i need to remove the top element
    i = 0;
    while (i < b->size - 1)
    {
        b->collection[i] = b->collection[i + 1];
        i++;
    }
    b->size--;
    return (0);
}
