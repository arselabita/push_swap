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

int is_sorted(t_stack *a)
{
	int i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->collection[i] < a->collection[i + 1])

		i++;
	}
	return (0);
}
int not_sorted(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
	{
		
	}
	else if (a->size == 5)
	{

	}
	radix_sort();
}
int push_swap(t_stack *a, t_stack *b)
{
	if (!a)
		return (-1);
	if (is_sorted(a))
	{
		write(1, "sorted\n", 8); // DONT FORGET TO DELETE
		return(0);
	}
	not_sorted(a, b);
	return (0);
}