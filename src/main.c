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

static int arg_count(int argc, char **argv)
{
    int i;
    int j;
    int count;
    char **split;

    i = 1;
    while (i < argc)
    {
        split = ft_split(argv[i], ' ');
        if (!split)
            return (write(2, "ERROR\n", 6), 0);
        j = 0;
        count = 0;
        while (split[j])
        {
            count++;
            j++;
        }
        free_split(split);
        i++;
    }
    return (count);
}

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    int argument_count;

    if (argc < 2)
        return (0);
    argument_count = arg_count(argc, argv);
    if (argument_count == 0)
        return (write(2, "ERROR\n", 6), 1);
    a = create_stack(argument_count);
    b = create_stack(argument_count);
    if (!is_empty(a))
        return (write(2, "ERROR\n", 6), 1);
    if (!parse_arguments(a, argc, argv))
        return (destroy_stack(a), 1);
    push_swap(a, b);
    destroy_stack(a);
    destroy_stack(b);
    return (0);
}
