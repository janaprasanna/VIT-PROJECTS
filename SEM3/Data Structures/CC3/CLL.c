#include <stdio.h>
#include <stdlib.h>

//Circular Linked List - Done by 20BCA00444

struct node
{
    int data;
    struct node *link;
} *rear = NULL;

void create(int data)
{ //   ->  [] ->
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;
    rear = temp;
}

void append(int data)
{
    if (rear == NULL)
    {
        create(data);
    }
    else // insert after rear  -> [] -> || -> [] ->   ~ [] ->
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = rear->link;
        rear->link = temp;
        rear = temp;
    }
}

void insertFirst(int data)
{
    if (rear == NULL)
    {
        create(data);
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = rear->link;
        rear->link = temp;
    }
}

void traverse()
{
    struct node *trav = rear;
    do
    {
        trav = trav->link;
        printf("%d ", trav->data);

    } while (trav != rear);
}

void delEnd()
{
    struct node *trav = rear, *delNode = NULL;
    while (trav->link != rear)
    {
        trav = trav->link;
    }
    trav->link = rear->link;
    delNode = rear;
    rear = trav;
    free(delNode);
}
int main()
{
    int n, d;
    printf("\n Enter the number of nodes to insert : ");
    scanf("%d", &n);

    printf("\n\n Inserting %d nodes \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("\n enter node %d :", i + 1);
        scanf("%d", &d);
        append(d);
    }

    printf("\n\n Traversing And displaying \n ");
    traverse();

    printf("\n Delete last node and traverse\n");
    delEnd();
    traverse();
}
