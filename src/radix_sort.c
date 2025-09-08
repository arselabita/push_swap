/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:39:41 by abita             #+#    #+#             */
/*   Updated: 2025/09/08 11:39:42 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int bubble_sort(int *temp_array, int size)
{
	int i;
	int j;
	int temp;
	int swapped;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		swapped = 0;
		while (j < size - i - 1)
		{
			if (temp_array[j] > temp_array[j + 1])
			{
				temp = temp_array[j];
				temp_array[j] = temp_array[j + 1];
				temp_array[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break;
		i++;
	}
	return (0);
}
static int creating_copy_arr(t_stack *a, int *temp_array)
{
	int i;

	i = 0;
	while (i <= a->size - 1)
	{
		temp_array[i] = a->collection[i];
		i++;
	}
	bubble_sort(temp_array, a->size);
	return (0);
}
static int getting_indexes(t_stack *a, int *temp_array, int *position)
{
	int i;
	int j;

	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->collection[i] == temp_array[j])
			{
				position[i] = j;
				break;
			}
			j++;
		}
		i++;
	}
	return (0);
}
static int converting_to_binary(int position, int bit_index)
{
	int i;

	i = 0;
	while (i < bit_index)
	{
		position /= 2;
		i++;
	}
	return (position % 2);
}
static int finding_max_bit(int *position, int size)
{
	int i;
	int j;
	int max;

	max = position[0];
	i = 0;
	while (i <= size - 1)
	{
		if (position[i] > max)
			max = position[i];
		i++;
	}
	j = 0;
	while (max != 0)
	{
		max /= 2;
		j++;
	}
	return (j);
}
int radix_sort(t_stack *a, t_stack *b)
{
	int *temp_array;
	int *position;
	int bits_iter;
	int i;
	int j;

	temp_array = (int *)malloc(sizeof(int) * a->size);
	if (!temp_array)
		return (0);
	position = (int *)malloc(sizeof(int) * a->size);
	if (!position)
		return (0);
	creating_copy_arr(a, temp_array);
	getting_indexes(a, temp_array, position);
	bits_iter = finding_max_bit(position, a->size);

	i = 0;
	while (i < bits_iter)
	{
		j = 0;
		int size = a->size;
		while (j < size)
		{
			if (converting_to_binary(position[j], i) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (b->size > 0)
			pa(a, b);
		i++;
	}



	free(temp_array);
	free(position);
	return (0);
}
/* int main()
{
	t_stack a;
	int arr[] = {-1, -4, 12, 0, -5, 45};

	a.collection = arr;
	a.size = 6;
	a.capacity = 6;
	radix_sort(&a);
	return (0);
}
	/// testing purposes
	printf("sorted array: ");
	i = 0;
	while (i < a->size)
	{
		printf("%d ", temp_array[i]);
		i++;
	}
	/// */