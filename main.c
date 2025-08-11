/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:20:43 by abita             #+#    #+#             */
/*   Updated: 2025/08/11 12:21:24 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int no_doubles(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int main(int ac, char **av)
{
    int i;
    int j;

    if (ac >= 2)
    {
        i = 1;
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                if (ft_isdigit(av[i][j]) && !no_doubles(av[i], av[i][j], j)) // Check first if its numerical and no doubles :)
                    write(1, &av[i][j], 1);
                else if (!ft_isdigit(av[i][j]))
                    //exit(0);
                    return (write(-1, "its not a numeric string!!", ft_strlen("its not a numeric string!!")), 0);// Then return the message if its not numerical
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
