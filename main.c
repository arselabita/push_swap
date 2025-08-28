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

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = create_stack(100);
    b = create_stack(0);
    if (!a)
        return (write(2, "ERROR: Couldn't create stack.\n", 31), 1);
    if (is_empty(a))
        return (write(2, "ERROR: Stack is empty.\n", 24));
    destroy_stack(a);
    return (0);
}
