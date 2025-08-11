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

#include <stdlib.h>
#include <unistd.h>

// Struct representing a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Struct to implement stack using a singly linked list
typedef struct stack {
    Node* head;
} Stack;

#endif
