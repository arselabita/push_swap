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

static int	not_sorted(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
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

int	push_swap(t_stack *a, t_stack *b)
{
	if (!a)
		return (-1);
	if (!is_sorted(a))
		return (0);
	not_sorted(a, b);
	return (0);
}
