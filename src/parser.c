/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:42:44 by abita             #+#    #+#             */
/*   Updated: 2025/08/30 10:57:08 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    1. use ft_split: if the input is within " "
    2. if the input isnt in "" its ok
    3. check: if the input is a number
        3.1 if not a number reply --> with a message
        3.2 the number should be within INT_MAX, INT_MIN
        3.3 the input should be converted to long with -- > atol
    4. check: if the input has dublicates reply -- > not allowed
    5. check: if the input is < 3
*/

static int	ft_valid_number(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_check_duplicates(t_stack *a, int number)
{
	int	i;

	i = 0;
	if (!a || !a->collection)
		return (0);
	while (i < a->size)
	{
		if (a->collection[i] == number)
			return (1);
		i++;
	}
	return (0);
}

static int	parsing_helper(t_stack *a, char *nums, int *number)
{
	long	value;

	if (!ft_valid_number(nums))
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
	value = ft_atol(nums);
	if (value < INT_MIN || value > INT_MAX)
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
	*number = (int)value;
	if (ft_check_duplicates(a, *number))
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
	if (a->size >= a->capacity)
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
	return (1);
}

int	parse_arguments(t_stack *a, int argc, char **argv)
{
	int		i;
	int		j;
	int		number;
	char	**nums;

	i = 1;
	while (i < argc)
	{
		nums = ft_split(argv[i], ' ');
		if (!nums)
			return (write(2, "ERROR\n", 6), 0);
		j = 0;
		while (nums[j])
		{
			if (!parsing_helper(a, nums[j], &number))
				return (free_split(nums), 0);
			a->collection[a->size++] = number;
			j++;
		}
		free_split(nums);
		i++;
	}
	return (1);
}
