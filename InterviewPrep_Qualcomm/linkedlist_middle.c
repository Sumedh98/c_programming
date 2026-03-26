#include "stdio.h"
#include "stdlib.h"


struct Node{
    int data;
    struct Node *next;
};


struct Node * listmiddle(struct Node *head)
{
    struct Node *fast = head;
    struct Node *slow = head;


    while((fast!=NULL)&&(fast->next !=NULL))
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow; 
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