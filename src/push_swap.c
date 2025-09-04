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
#include <stdio.h>

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
static void operations_three(t_stack *a, int max)
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
	operations_three(a, max);
	return (0);
}
static void operations_four(t_stack *a, t_stack *b, int min)
{
	if (min == a->collection[0])
	{
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[1])
	{
		sa(a);
		write(1, "sa\n", 3);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[2])
	{
		rra(a);
		write(1, "rra\n", 4);
		rra(a);
		write(1, "rra\n", 4);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[3])
	{
		rra(a);
		write(1, "rra\n", 4);
		pb(a, b);
		write(1, "pb\n", 3);
	}
}
static int sorting_for_four(t_stack *a, t_stack *b)
{
	int i;
	int min;

	i = 0;
	min = a->collection[0];
	while (i <= a->size - 1)
	{
		if (min > a->collection[i])
			min = a->collection[i];
		i++;
	}
	operations_four(a, b, min);
	sorting_for_three(a);
	while (b->size > 0)
	{
		pa(a, b);
		write(1, "pa\n", 3);
	}
	return (0);
}
static int sorting_for_five(t_stack *a, t_stack *b)
{
	int i;
	int min;

	i = 0;
	min = a->collection[0];
	while (i <= a->size - 1)
	{
		if (min > a->collection[i])
			min = a->collection[i];
		i++;
	}
	if (min == a->collection[0])
	{
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[1])
	{
		sa(a);
		write(1, "sa\n", 3);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[2])
	{
		ra(a);
		write(1, "ra\n", 3);
		ra(a);
		write(1, "ra\n", 3);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[3])
	{
		rra(a);
		write(1, "rra\n", 4);
		rra(a);
		write(1, "rra\n", 4);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	else if (min == a->collection[4])
	{
		rra(a);
		write(1, "rra\n", 4);
		pb(a, b);
		write(1, "pb\n", 3);
	}
	sorting_for_four(a, b);
	while (b->size > 0)
	{
		pa(a, b);
		write(1, "pa\n", 3);
	}
	return (0);
}
static int radix_sort(t_stack *a, t_stack *b)
{
	int i;
	int *radix_array;

	radix_array = malloc(sizeof(int));

	i = 0;
	while ()
	{

	}
	return (0);
}
static int not_sorted(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		sa(a);
		write(1, "sa\n", 3);
	}
	else if (a->size == 3)
		sorting_for_three(a);
	else if (a->size == 4)
		sorting_for_four(a, b);
	else if (a->size == 5)
		sorting_for_five(a, b);
	else
		radix_sort(a, b);
	return (0);
}
int push_swap(t_stack *a, t_stack *b)
{
	if (!a)
		return (-1);
	if (!is_sorted(a))
	{
		write(1, "sorted\n", 7); // DONT FORGET TO DELETE
		return(0);
	}
	not_sorted(a, b);
	return (0);
}
