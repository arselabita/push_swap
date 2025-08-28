/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:40:34 by abita             #+#    #+#             */
/*   Updated: 2025/08/27 15:40:36 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack create_stack(int capacity)
{
    t_stack *stack;

    if (capacity <= 0)
        return (write(2, "The stack is empty!\n", 21), NULL);
    stack = (t_stack)malloc(sizeof(t_stack));
    if (!stack)
        return (write(2, "Failed to allocate memory for the stack!\n", 42), NULL);
    stack.collection
}