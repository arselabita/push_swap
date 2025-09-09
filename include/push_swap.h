/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:20:59 by abita             #+#    #+#             */
/*   Updated: 2025/09/09 20:56:28 by abita            ###   ########.fr       */
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
	int	*collection;
	int	capacity;
	int	size;
}	t_stack;

// __________MAIN_HELPER_FUNCTION___________
int		parse_arguments(t_stack *a, int argc, char **argv);
void	free_split(char **array);
int		arg_count(int argc, char **argv);
int		run_push_swap(int argc, char **argv);

// ____STACK_IMPLEMENTATION_FUNCTIONS____
t_stack	*create_stack(int capacity);
void	destroy_stack(t_stack *stack);
bool	is_full(t_stack *stack);
bool	is_empty(t_stack *stack);
bool	pop(t_stack *stack, int *item);
bool	push(t_stack *stack, int item);

// ____IMPLEMENTATION_OPERATION_FUNCTIONS____
int		sa(t_stack *a);
int		sb(t_stack *b);
int		ss(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		pa(t_stack *a, t_stack *b);
int		ra(t_stack *a);
int		rb(t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		rra(t_stack *a);
int		rrb(t_stack *b);
int		rrr(t_stack *a, t_stack *b);

// ____HARDCODED_SORTING_FUNCTIONS____
int		sorting_for_five(t_stack *a, t_stack *b);
void	operations_four(t_stack *a, t_stack *b, int min);
int		sorting_for_four(t_stack *a, t_stack *b);
void	operations_three(t_stack *a, int max);
int		sorting_for_three(t_stack *a);
int		is_sorted(t_stack *a);

// ______THE_SORTING_ALGORITHM______
int		push_swap(t_stack *a, t_stack *b);
int		radix_sort(t_stack *a, t_stack *b);
int		getting_indexes(t_stack *a, int *temp_array);
int		creating_copy_arr(t_stack *a, int *temp_array);
void	bubble_sort(int *temp_array, int size);
void	helper(int temp, int *temp_array, int j);

#endif
