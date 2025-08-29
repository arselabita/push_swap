/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:20:59 by abita             #+#    #+#             */
/*   Updated: 2025/08/11 12:21:09 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> // malloc, free
# include <unistd.h> // write
# include <stdbool.h> // true, false
# include <limits.h> // INT_MIN, INT_MAX
# include "libft/libft.h"

// Structure for stack
typedef struct s_stack
{
    int *collection;
    int capacity;
    int size;
} t_stack;

// __________MAIN_HELPER_FUNCTION___________
int parse_arguments(t_stack **a, int argc, char **argv);

// ____STACK_IMPLEMENTATION_FUNCTIONS____
t_stack *create_stack(int capacity);
void destroy_stack(t_stack *stack);
bool is_full(t_stack *stack);
bool is_empty(t_stack *stack);
bool pop(t_stack *stack, int *item);
bool push(t_stack *stack, int item);




#endif
