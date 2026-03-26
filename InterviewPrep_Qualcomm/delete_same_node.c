#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node *next;
};

void add_node_last(struct Node **head_ref, int data)
{
    struct Node *current_node = *head_ref;
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if(current_node == NULL)
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

void delete_same_node(struct Node **head)
{
    struct Node *current = *head;
    struct Node *prev = *head;
    struct Node *free = *head;
    int array[10]={0};
    int idx = 0;

    array[idx] = current->data;
    idx++;
    current = current->next;

    while(current)
    {
        for(int i=0; i<10; i++)
        {
            if(arr[i] == current->data)
            {
                prev->next = current->next;
                free = current;
                current = current->next;
                free(free);
                break;
            }
        }
        array[idx] = current->data;
        idx++;
        prev = current;
        current = current->next;
    }
}


int main()
{
    struct Node *head = NULL;

    add_node_last(&head, 5);
    add_node_last(&head, 10);
    add_node_last(&head, 5);
    add_node_last(&head, 15);
    print_nodes(head);

    return 0;
}