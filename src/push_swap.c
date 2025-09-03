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
static void finding_the_biggest_number_to_sort(t_stack *a, int max)
{
	if (a->collection[0] < max)
	{
		sa(a);
		write(1, "sa\n", 3);
	}
	ra(a);
	write(1, "ra\n", 3);
}
static int not_sorted(t_stack *a)
{
	if (a->size == 2)
	{
		sa(a);
		write(1, "sa\n", 3);
	}
	else if (a->size == 3)
	{
		int i;
		int max;

		i = 0;
		max = a->collection[0];
		while (i < a->size - 1)
		{
			if (max < a->collection[i])
				max = a->collection[i];
			i++;
		}
		if (a->collection[0] < max)
			finding_the_biggest_number_to_sort(a, max);
		else
			finding_the_smallest_number_to_sort(a, max);
	}
/* 	else if (a->size == 5)
	{

	} */
	//radix_sort();
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
