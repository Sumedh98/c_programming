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

bool detectLoop(struct Node *head)
{
    struct Node *fast = head;
    struct Node *slow = head;


    while((fast!=NULL)&&(fast->next !=NULL))
    {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)
        {
            return TRUE; // loop detected
        }
    }
    return FALSE; //no loop present
}

int main()
{
    struct Node *head = NULL;

    add_node_last(&head, 5);
    add_node_last(&head, 10);
    add_node_last(&head, 15);
    print_nodes(head);

    return 0;
}