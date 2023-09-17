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
int main()
{
    node n1, n2, n3;
    node *head;

    n1.value = 45;
    n2.value = 60;
    n3.value = 8;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    node n4;
    n4.value = 56;
    n1.next = &n4;
    n4.next = &n2;

        /*delete node 2*/
    n2.next = NULL;
    n4.next = &n3;
    print_list(head);
}
