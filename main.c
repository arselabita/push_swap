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

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    if (argc < 2)
        return (write(2, "ERROR: No arguments passed.\n", 29), 0);
    a = create_stack(argc - 1);
    if (!a)
        return (write(2, "ERROR: Couldn't create stack.\n", 31), 1);
    if (!parse_arguments(a, argc, argv))
        return (destroy_stack(a), 1);
    return (0);
}
