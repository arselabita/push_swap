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