/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:20:43 by abita             #+#    #+#             */
/*   Updated: 2025/08/11 12:21:24 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // MOS HARRO TA FSHISH TEST PURPOSE

// ____FOR_TESTING_PURPOSES____
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
int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    if (argc < 2)
        return (0);
    a = create_stack(argc - 1);
    // b = create_stack(argc - 1); // the temporary stack 
    if (!is_empty(a))
        return (write(2, "ERROR: Couldn't create stack.\n", 31), 1);
    if (!parse_arguments(a, argc, argv))
        return (destroy_stack(a), 1);
    else
    {
        //stack_sorting(a);
        print_stack(a);        
    }
    destroy_stack(a);
    return (0);
}
