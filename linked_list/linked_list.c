// Linked List in C99

#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (!new_node)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void append(struct node **head, int data)
{
    struct node *new_node = create_node(data);
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_list(struct node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void)
{
    struct node *head = NULL;
    append(&head, 1);
    append(&head, 12);
    append(&head, 123);
    
    print_list(head);
    return 0;
}