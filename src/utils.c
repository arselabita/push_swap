/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:12:25 by abita             #+#    #+#             */
/*   Updated: 2025/09/09 20:23:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_count(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	**split;

	i = 1;
	count = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (write(2, "ERROR\n", 6), 0);
		j = 0;
		while (split[j])
		{
			count++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (count);
}

void	free_split(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->collection[i] > a->collection[i + 1])
			return (-1);
		i++;
	}
	return (0);
}

int	run_push_swap(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		argument_count;

	argument_count = arg_count(argc, argv);
	if (argument_count == 0)
		return (write(2, "ERROR\n", 6), 1);
	a = create_stack(argument_count);
	b = create_stack(argument_count);
	if (!a || !b)
		return (write(2, "ERROR\n", 6), destroy_stack(a), destroy_stack(b), 1);
	if (!parse_arguments(a, argc, argv))
		return (destroy_stack(a), destroy_stack(b), 1);
	push_swap(a, b);
	destroy_stack(a);
	destroy_stack(b);
	return (0);
}
