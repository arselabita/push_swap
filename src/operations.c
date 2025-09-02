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
#include <stdlib.h>
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
//     sa (swap a): Swap the first 2 elements at the top of stack a.
//                  Do nothing if there is only one element or none.

//     sb (swap b): Swap the first 2 elements at the top of stack b.
//                  Do nothing if there is only one element or none.

//     ss : sa and sb at the same time.
int swap_stack(t_stack *stack)
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
    return (swap_stack(a));
}
int sb(t_stack *b)
{
    return (swap_stack(b));
}

int ss(t_stack *a, t_stack *b)
{
    int stack_a;
    int stack_b;

    stack_a = swap_stack(a);
    stack_b = swap_stack(b);
    if (stack_a == 0 && stack_b == 0)
        return (0);
    return (-1);
}

/*
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
    i = b->size;
    // i do this to create space at the top of my stack
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

/*
    ra (rotate a): Shift up all elements of stack a by 1.
                   The first element becomes the last one.
    rb (rotate b): Shift up all elements of stack b by 1.
                   The first element becomes the last one.
    rr : ra and rb at the same time.
*/








int main(int ac, char **av)
{
    int i;
    t_stack *a;
    t_stack *b;

    a = create_stack(ac - 1);
    b = create_stack(ac - 1);
    if (ac < 2)
        return (0);
    i = 1;
    while (i < ac)
    {
        if (i % 2 == 1)
            a->collection[a->size++] = atoi(av[i]);
        else
            b->collection[b->size++] = atoi(av[i]);
        i++;
    }

    printf ("Before: Stack A: \n");
    print_stack(a);
    printf ("Stack B: \n");
    print_stack(b);

    pa(a, b);

    printf ("After: Stack A: \n");
    print_stack(a);
    printf ("Stack B: \n");
    print_stack(b);
    printf("----------------"); 

    free(a->collection);
    free(b->collection);
    free(a);
    free(b);
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
