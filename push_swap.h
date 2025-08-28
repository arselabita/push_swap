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

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h> // DONT FORGET TO DELETE
# include "libft/libft.h"

// Structure for stack
typedef struct s_stack
{
    int *collection;
    int capacity;
    int size;
} t_stack;

// ____STACK_IMPLEMENTATION_FUNCTIONS____
t_stack *create_stack(int capacity);
bool is_full(t_stack *stack);
bool is_empty(t_stack *stack);
bool pop(t_stack *stack, int *item);
bool push(t_stack *stack, int item);




#endif
