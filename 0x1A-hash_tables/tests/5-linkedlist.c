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

node *insert_at_head(node **head, node *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

int main()
{
    node *head = NULL;
    node *tmp;
    

    for(int i=0;i<25;i++)
    {
	    tmp = create_new_node(i);
	    insert_at_head(&head, tmp);
    }

    print_list(head);
    return (0);
}
