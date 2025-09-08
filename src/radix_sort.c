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

static int bubble_sort(int *temp_array, int size)
{
	int i;
	int j;
	int temp;
	int swapped;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		swapped = 0;
		while (j <= size - 1)
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

int radix_sort(t_stack *a)
{
	int *temp_array;
	int i;

	temp_array = (int *)malloc(sizeof(int) * a->size);
	if (!temp_array)
		return (0);
	i = 0;
	while (i <= a->size - 1)
	{
		temp_array[i] = a->collection[i];
		i++;
	}
	bubble_sort(temp_array, a->size);
	free(temp_array);
	return (0);
}
