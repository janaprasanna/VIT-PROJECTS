#include <stdio.h>
#include <stdlib.h>

// Double Linked list - Done by 20BCA0044

struct node
{
    struct node *prev;
    struct node *next;
    int data;
} *head = NULL, *rear = NULL; // basic creation

void create(int data) // for first node  x- [data] ->
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    rear = temp;
}

void appendNode(int data) // for 1 or more nodes x- [] - > < - [] -> .....
{
    if (head == NULL)
    {
        create(data);
    }
    else
    { // []-> rear <-[] - x
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->prev = rear;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void insertFirst(int data)
{
    if (head == NULL)
    {
        create(data);
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void traverse()
{
    struct node *trav = head;
    while (trav != NULL)
    {
        printf("%d ", trav->data);
        trav = trav->next;
    }
}

int main()
{
    int n, d;
    printf("\n Enter the number of nodes you want insert : ");
    scanf("%d", &n);

    printf("\n\n Appending ... \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n Data to Enter for node %d: ", i + 1);
        scanf("%d", &d);
        appendNode(d);
    }

    printf("\n\n insert at Beginning! \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n Data to Enter for node %d: ", i + 1);
        scanf("%d", &d);
        insertFirst(d);
    }

    printf("\n Insert Node at end|| data: ");
    scanf("%d", &d);
    appendNode(d);

    printf("\n Traversing and displaying all nodes! \n");
    traverse();
}