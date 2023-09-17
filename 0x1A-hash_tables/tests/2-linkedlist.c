#include <stdlib.h>
#include <stdio.h>

typedef struct node_t{
    int value;
    struct node_t *next;
} node;

void print_list(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node *create_new_node(int value)
{
    node *result = malloc(sizeof(node));
    result->value = value;
    result->next = NULL;
    return result;
}

int main()
{
    node *head;
    node *tmp;

    tmp = create_new_node(32);
    head = tmp;
    tmp = create_new_node(24);
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(8);
    tmp->next = head;
    head = tmp;

    print_list(head);
    return (0);
}
