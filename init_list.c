/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:15:52 by abita             #+#    #+#             */
/*   Updated: 2025/08/27 15:15:54 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// __LINKED_LIST_IMPLEMENTATION_FUNCTIONS___

// linked list function to create it
t_node *create_node(int data)
{
    t_node *newNode;
    
    newNode = (t_node *)ft_calloc(1, sizeof(t_node));
    if (!newNode)
    {
        write (2, "Memory allocation failed!\n", 27);
        exit(EXIT_FAILURE);
    }
    // add data into node
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}
int inserted_before_head(t_node **head, int data)
{
    t_node *newNode;

    newNode = create_node(data);
    if (!newNode)
        exit(EXIT_FAILURE);
    // if the list is empty
    if (*head == NULL)
        return (*head = newNode, 0);
    newNode->next = *head;
    *head = newNode;
    return (0);
}
int delete_head(t_node **head)
{
    t_node *temp;

    temp = *head;
    *head = (*head)->next;
    return (free(temp), 0);
}
