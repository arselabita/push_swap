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

static int	converting_to_binary(int position, int bit_index)
{
	int	i;

	i = 0;
	while (i < bit_index)
	{
		position /= 2;
		i++;
	}
	return (position % 2);
}

static int	finding_max_bit(int *position, int size)
{
	int	i;
	int	j;
	int	max;

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

int	radix_helper(int bits_iter, t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (i < bits_iter)
	{
		j = 0;
		size = a->size;
		while (j < size)
		{
			if (converting_to_binary(a->collection[0], i) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (b->size > 0)
			pa(a, b);
		i++;
	}
	return (0);
}

int	radix_sort(t_stack *a, t_stack *b)
{
	int		*temp_array;
	int		bits_iter;

	temp_array = (int *)malloc(sizeof(int) * a->size);
	if (!temp_array)
		return (0);
	creating_copy_arr(a, temp_array);
	getting_indexes(a, temp_array);
	bits_iter = finding_max_bit(a->collection, a->size);
	radix_helper(bits_iter, a, b);
	return (free(temp_array), 0);
}
