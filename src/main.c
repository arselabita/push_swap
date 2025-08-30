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

static void print_stack(t_stack *a)
{
    int i;

    i = 0;
    while (a->collection[i])
    {
        write(1, &a->collection[i], 1);
        i++;
    }
}
int main(int argc, char **argv)
{
    t_stack *a;
    //t_stack *b;

    if (argc < 2)
        return (0);
    a = create_stack(argc - 1);
    if (!a)
        return (write(2, "ERROR: Couldn't create stack.\n", 31), 1);
    if (!parse_arguments(a, argc, argv))
        return (destroy_stack(a), 1);
    else
        print_stack(a);
    destroy_stack(a);
    return (0);
}
