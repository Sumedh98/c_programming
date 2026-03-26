#include "stdio.h"
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void add_node_start(struct Node **head, int data)
{
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->next = *head; 
    new_node->data = data;

    *head = new_node;
}

void add_node_last(struct Node *head_ref, int data)
{
    struct Node *current_node = head_ref;
    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->next = NULL;
    new_node->data = data;
    current_node->next = new_node;
}

void print_all_nodes(struct Node *head_ref)
{
    struct Node *current_node = head_ref;

    while(current_node != NULL)
    {
        printf("%d", current_node->data);
        current_node = current_node->next;
    }
}

int main()
{
    struct Node *head = NULL;
    add_node_start(&head, 5);
    add_node_start(&head, 4);
    add_node_start(&head, 3);

    add_node_last(head, 6);

    print_all_nodes(head);
    return 0;
}