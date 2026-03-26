#include "stdio.h"
#include "stdlib.h"

/*Function implementations are generally done here. Does not mean things are correct or that they compile
Take reference of problems that will be asked from here and then check with AI*/

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

/*Write a C function to find the Nth node from the END of a linked list in a single pass.*/
int nthLastNode(struct Node *head, int N_End)
{
    if(head == NULL)
    {
        printf("LinkedList doesnot exist, Please provide valid linked list\n");
        return 52;//lets consider 52 to be a error code in this case
    }
    struct Node *slow = head;
    struct Node *fast = head;

    for(int i=0; i<N_End; i++)
    {
        if(fast->next == NULL)
        {
            print("List shorter than Nth last node provided\n");
            return 52;//lets consider 52 to be a error code in this case
        }
        fast = fast->next;
    }

    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
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