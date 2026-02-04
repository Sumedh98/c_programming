// Program to create linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

// Function to insert new node at the start of linked list
void insert_at_start(struct Node **head, int data)
{
	struct Node *new_node = malloc(sizeof(struct Node));

	new_node->next = *head;
	new_node->data = data;

	*head = new_node;

}

// Function to insert new node at the end of linked list
void insert_at_end(struct Node *head_ref, int data)
{
    struct Node *current_node = head_ref;

    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = NULL;
    
    current_node->next = new_node;
}

// Function to print all data in linked list
void print_all_nodes(struct Node *head)
{
	struct Node *current = head;
	while(current != NULL)
	{
		printf("%d\n",current->data);
		current = current->next;
	}
}

void main()
{
	struct Node *head = NULL;

	insert_at_start(&head, 5);
	insert_at_start(&head, 10);
	insert_at_start(&head, 20);
    insert_at_end(head, 123);
    insert_at_end(head, 99);
	print_all_nodes(head);

}
