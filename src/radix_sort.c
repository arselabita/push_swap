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

/* #include "push_swap.h"*/
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int *collection; // dynamically allocated array (which will be a poiner)
    int capacity; // the capacity will be the size of the dynamically allocated array in terms on how many ints it can store
    int size; // the number of elements stored in this dynamically allocated array
} t_stack;

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
	int j;

	i = 0;
	while (i <= a->size - 1)
	{
		temp_array[i] = a->collection[i];
		i++;
	}
	bubble_sort(temp_array, a->size);
	return (0);
}
static int *getting_indexes(t_stack *a, int *temp_array, int *position)
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
	return (position);
}
static int converting_to_binary(t_stack *a, int position)
{
	int i;

	i = 0;
	while (i < position)
	{
		a->collection[i] /= 2;
		i++;
	}
	return (a->collection[i] % 2);
}
int radix_sort(t_stack *a)
{
	int *temp_array;
	int *position;
	int i;
	int max;

	temp_array = (int *)malloc(sizeof(int) * a->size);
	if (!temp_array)
		return (0);
	position = (int *)malloc(sizeof(int) * a->size);
	if (!position)
		return (0);
	creating_copy_arr(a, temp_array);
	getting_indexes(a, temp_array, position);
	i = 0;
	max = a->collection[0];
	while (i <= a->size - 1)
	{
		if (max < a->collection[i])
			max = a->collection[i];
		i++;
	}
	i = 0;
	while (max == a->size - 1)
	{
		converting_to_binary(a->collection[i], position);
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