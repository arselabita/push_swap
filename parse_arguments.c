/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:42:44 by abita             #+#    #+#             */
/*   Updated: 2025/08/29 11:42:49 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
    1. use ft_split: if the input is within " "
    2. if the input isnt in "" its ok
    3. check: if the input is a number
        3.1 if not a number reply --> with a message
        3.2 the number should be within INT_MAX, INT_MIN
    4. check: if the input has dublicates reply -- > not allowed 
    5. check: if the input is < 3
*/

int parse_arguments(t_stack *a, int argc, char **argv)
{
    int i;
    int j;
    int k;
    int numbers;
    char **nums;

    i = 1;
    while (i < argc)
    {
        nums = ft_split(argv[i], ' ');
        if (!nums)
            return (write(2, "Error: Failed to split numbers!\n", 33), 0);
        j = 0;
        while (nums[j])
        {
            k = 0;
            if (nums[j][k] == '-' || nums[j][k] == '+')
                k++;
            while (nums[j][k])
            {
                if (!ft_isdigit(nums[j][k]))
                    return(write(2, "ERROR: The input does not contain numbers.\n", 44), 0);
                k++;
            }
            numbers = ft_atoi(nums[j]);
            
            j++;
        }
        i++;
    }
    return (1);
}
