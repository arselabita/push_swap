/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:34:05 by abita             #+#    #+#             */
/*   Updated: 2025/09/09 20:34:06 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *temp_array, int size)
{
	int	i;
	int	j;
	int	temp;
	int	swapped;

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
			break ;
		i++;
	}
}

int	creating_copy_arr(t_stack *a, int *temp_array)
{
	int	i;

	i = 0;
	while (i <= a->size - 1)
	{
		temp_array[i] = a->collection[i];
		i++;
	}
	bubble_sort(temp_array, a->size);
	return (0);
}

int	getting_indexes(t_stack *a, int *temp_array)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->collection[i] == temp_array[j])
			{
				a->collection[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (0);
}
