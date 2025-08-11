
#include "push_swap.h"

t_node *createNode(int content)
{
    t_node *newNode;
    
    newNode = (t_node *)ft_calloc(1, sizeof(t_node));
    if (!newNode)
    {
        write (2, "Memory allocation failed!\n", 27);
        exit(EXIT_FAILURE);
    }
    newNode->content = content;
    newNode->next = NULL;
    return (newNode);
} 