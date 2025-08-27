/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:40:34 by abita             #+#    #+#             */
/*   Updated: 2025/08/27 15:40:36 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ____STACK_IMPLEMENTATION_FUNCTIONS____
// function to check if the stack is empty
int is_empty(t_node **stack)
{
    return (*stack == NULL);
}
// function to push the elements to the stack
void push(t_node **stack, int data)
{
    // here we insert data in the beginnig of the linked list stack
    // if what is inserted is non-zero value, we have the case of 
    // stack overflow
    if (inserted_before_head(stack, data))
        write(2, "Stack Overflow!\n", 17);
}
// function to pop an element from the stack
int pop(t_node **stack)
{
    // check for underflow
    if (is_empty(stack))
        return (write(2, "Stack Underflow!\n", 18), -1);
    delete_head(stack);
}
// function to print the stack
void print_stack(t_node **stack)
{
    t_node *temp;

    temp = *stack;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}