/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:40:34 by abita             #+#    #+#             */
/*   Updated: 2025/08/30 10:57:15 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int capacity)
{
	t_stack	*stack;

	if (capacity <= 0)
	{
		write(2, "The stack is empty!\n", 21);
		return (NULL);
	}
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
	{
		write(2, "Failed to allocate memory for the stack!\n", 42);
		return (NULL);
	}
	stack->collection = malloc(sizeof(int) * capacity);
	if (!stack->collection)
	{
		free(stack);
		write(2, "Failed to create the stack!\n", 29);
		return (NULL);
	}
	stack->capacity = capacity;
	stack->size = 0;
	return (stack);
}

void	destroy_stack(t_stack *stack)
{
	free(stack->collection);
	free(stack);
}

bool	is_empty(t_stack *stack)
{
	return (stack->size == 0);
}
