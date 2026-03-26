#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node *next;
};

void add_linkedlist_end(struct Node **head_ref, int data)
{
    struct Node *current_node = *head_ref;
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    current_node->next = new_node;
}

void print_nodes(struct Node *head_ref)
{
    struct Node *current_node = head_ref;
    while(current_node)
    {
        printf("%d\n", current_node->data);
        current_node = current_node->next; 
    }
}

struct Node * reverseLinkedList(struct Node **head_ref)
{
    if(*head_ref == NULL)
    {
        printf("List is empty. nothing to reverse");
        return;
    }
    struct Node *current_node = *head_ref;
    struct Node *prev = NULL;
    struct Node *next; 
    while(current_node)
    {
        next = current_node->next;
        current_node->next = prev;
        prev = current_node;
        current_node = next;
    }
    return prev;
}

int main()
{
    struct Node *head =NULL;

    add_linkedlist_end(&head, 5);
    add_linkedlist_end(&head, 10);
    print_nodes(head);
    head = reverseLinkedList(&head);
    print_nodes(head);
}