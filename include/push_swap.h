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
# include "libft.h"

// ____STRUCT_BODY____
typedef struct s_stack
{
    int *collection; // dynamically allocated array (which will be a poiner)
    int capacity; // the capacity will be the size of the dynamically allocated array in terms on how many ints it can store
    int size; // the number of elements stored in this dynamically allocated array
} t_stack;

// __________MAIN_HELPER_FUNCTION___________
int parse_arguments(t_stack *a, int argc, char **argv);

// ____STACK_IMPLEMENTATION_FUNCTIONS____
t_stack *create_stack(int capacity);
void destroy_stack(t_stack *stack);
bool is_full(t_stack *stack);
bool is_empty(t_stack *stack);
bool pop(t_stack *stack, int *item);
bool push(t_stack *stack, int item);

// ____IMPLEMENTATION_OPERATION_FUNCTIONS____
int sa(t_stack *a);
int sb(t_stack *b);
int ss(t_stack *a, t_stack *b);
int pb(t_stack *a, t_stack *b);
int pa(t_stack *a, t_stack *b);
int ra(t_stack *a);
int rb(t_stack *b);
int rr(t_stack *a, t_stack *b);
int rra(t_stack *a);
int rrb(t_stack *b);
int rrr(t_stack *a, t_stack *b);

#endif
