/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:42:35 by abita             #+#    #+#             */
/*   Updated: 2025/08/30 10:57:02 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Funksionet per kete file:

    sa (swap a): Swap the first 2 elements at the top of stack a.
                 Do nothing if there is only one element or none.
    sb (swap b): Swap the first 2 elements at the top of stack b.
                 Do nothing if there is only one element or none.
    ss : sa and sb at the same time.
    pa (push a): Take the first element at the top of b and put it at the top of a.
                 Do nothing if b is empty.
    pb (push b): Take the first element at the top of a and put it at the top of b.
                 Do nothing if a is empty.
    ra (rotate a): Shift up all elements of stack a by 1.
                   The first element becomes the last one.
    rb (rotate b): Shift up all elements of stack b by 1.
                   The first element becomes the last one.
    rr : ra and rb at the same time.
    rra (reverse rotate a): Shift down all elements of stack a by 1.
                            The last element becomes the first one.
    rrb (reverse rotate b): Shift down all elements of stack b by 1.
                            The last element becomes the first one.
    rrr : rra and rrb at the same time.
*/

// return 1 if the array is sorted in asc
// return -1 if is sorted in dc order
// return 0 if the array is not sorted

int is_sorted(t_stack *a)
{
    int top;
    t_stack *b;

    b = create_stack(a->size);
    top = -1;
    if (top)
        return (0);
    
}

int stack_sortoing(t_stack *a)
{
    if (!is_empty(a))
        return (write(2, "ERROR: Couldn't create stack.\n", 31), 1);
    if (!is_sorted(a))
    {
        if (a->collection == 2)
            sa(a);
        else if (a->collection == 3)
            //...
        else
            // radix alg
    }
    else
    {
        // if sorted
        return ();
    }
     
}
/* void swap_a(t_stack *stack)
{
    int i;

    i = 0
    while (i < stack)
    {
        
    }
} */