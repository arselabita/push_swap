/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:53:00 by abita             #+#    #+#             */
/*   Updated: 2025/09/02 20:53:01 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_sorted(t_stack *a)
{
	int i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->collection[i] > a->collection[i + 1])
			return (-1);
		i++;
	}
	return (0);
}
static void operations(t_stack *a, int max)
{
	if (max == a->collection[0])
	{
		ra(a);
		write(1, "ra\n", 3);
	}
	else if (max == a->collection[1])
	{
		rra(a);
		write(1, "rra\n", 4);
	}
	if (is_sorted(a))
	{
		sa(a);
		write(1, "sa\n", 3);
	}
}
static int sorting_for_three(t_stack *a)
{
	int i;
	int max;

	i = 0;
	max = a->collection[0];
	while (i <= a->size - 1)
	{
		if (max < a->collection[i])
			max = a->collection[i];
		i++;
	}
	operations(a, max);
	return (0);
}
static int not_sorted(t_stack *a)
{
	if (a->size == 2)
	{
		sa(a);
		write(1, "sa\n", 3);
	}
	else if (a->size == 3)
		sorting_for_three(a);
	return (0);
}
int push_swap(t_stack *a)
{
	if (!a)
		return (-1);
	if (!is_sorted(a))
	{
		write(1, "sorted\n", 8); // DONT FORGET TO DELETE
		return(0);
	}
	not_sorted(a);
	return (0);
}
