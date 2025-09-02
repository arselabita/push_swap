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

#include "../include/push_swap.h"
#include <stdio.h>
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

static void print_stack(t_stack *a)
{
    int i;

    i = 0;
    while (i < a->size)
    {
        printf("%d\n", a->collection[i]);
        i++;
    }
}

int swap_stack_a(t_stack *a)
{
    int temp;

    temp = a->collection[0];
    a->collection[0] = a->collection[1];
    a->collection[1] = temp;

    return (temp);
}

int main(int ac, char **av)
{
    int i;
    int j;
    t_stack *a;

    if (ac < 2)
        return (0);
    i = 1;
    a = create_stack(ac - 1);
    while (i < ac)
    {
        j = 0;
        int number = atoi(av[i]);
        while (number[j])
        {
            print_stack(a);
            a->collection[a->size++] = number;
            j++;
        }  
        i++;
    }
    swap_stack_a(a);
    
    return (0);
}





















/* 
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
     
} */
