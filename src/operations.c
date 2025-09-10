/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:22:20 by abita             #+#    #+#             */
/*   Updated: 2025/09/09 19:22:21 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operations_for_five(t_stack *a, t_stack *b, int min)
{
	if (min == a->collection[0])
		pb(a, b);
	else if (min == a->collection[1])
	{
		sa(a);
		pb(a, b);
	}
	else if (min == a->collection[2])
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else if (min == a->collection[3])
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	else if (min == a->collection[4])
	{
		rra(a);
		pb(a, b);
	}
}

int	sorting_for_five(t_stack *a, t_stack *b)
{
	int	i;
	int	min;

	i = 0;
	min = a->collection[0];
	while (i <= a->size - 1)
	{
		if (min > a->collection[i])
			min = a->collection[i];
		i++;
	}
	operations_for_five(a, b, min);
	sorting_for_four(a, b);
	while (b->size > 0)
		pa(a, b);
	return (0);
}

void	operations_four(t_stack *a, t_stack *b, int min)
{
	if (min == a->collection[0])
	{
		pb(a, b);
	}
	else if (min == a->collection[1])
	{
		sa(a);
		pb(a, b);
	}
	else if (min == a->collection[2])
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else if (min == a->collection[3])
	{
		rra(a);
		pb(a, b);
	}
}

int	sorting_for_four(t_stack *a, t_stack *b)
{
	int	i;
	int	min;

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
		pa(a, b);
	return (0);
}

void	operations_three(t_stack *a, int max)
{
	if (max == a->collection[0])
		ra(a);
	else if (max == a->collection[1])
		rra(a);
	if (is_sorted(a))
		sa(a);
}
