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
# include <stdio.h> // DONT FORGET TO DELETE
# include "libft/libft.h"

// Structure for the linked stack
typedef struct s_node
{
    void            *data;
    struct s_node  *next;
} t_node;


// __LINKED_LIST_IMPLEMENTATION_FUNCTIONS___
t_node *create_node(int content);
int inserted_before_head(t_node **head, int data);
int delete_head(t_node **head);

// ____STACK_IMPLEMENTATION_FUNCTIONS____
int is_empty(t_node **stack);
void push(t_node **stack, int data);
int pop(t_node **stack);



#endif
