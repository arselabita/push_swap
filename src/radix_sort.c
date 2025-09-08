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

void bubble_sort(t_stack *a)
{
	int i;
	int j;
	int temp;
	int swapped;

	i = 0;
	while (i <= a->size - 1)
	{
		j = i + 1;
		swapped = 0;
		while (j <= a->size - 1)
		{
			if (a->collection[j] > a->collection[j + 1])
			{
				temp = a->collection[j];
				a->collection[j] = a->collection[j + 1];
				a->collection[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break;
		i++;
	}
}

int radix_sort(t_stack *a, t_stack *b)
{
	int i;
	int max;
	int k;
	int l;

	i = 0;
	max = a->collection[0];
	while (i <= a->size - 1)
	{
		if (max < a->collection[i])
			max = a->collection[i];
		i++;
	}

	k = 0;
	while (k < a->size - 1)
	{
		l = 0;
		while (l < a->size - 1)
		{
			if ( == 0)
			{
				pb(a, b);
			}
			else
				ra(a);
			l++;
		}
		k++;
	}
	return (0);
}
