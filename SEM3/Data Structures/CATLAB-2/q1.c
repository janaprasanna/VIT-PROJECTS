#include <stdio.h>
#include <stdlib.h>

// Double Linked list - Done by 20BCA0044

struct inventory
{
    struct inventory *prev;
    struct inventory *next;
    int prod_num;
    int qty;
    float cost;
} 
*head = NULL, *rear = NULL; 

void create(int prod_num, int qty, float cost) 
{
    struct inventory *temp = (struct inventory *)malloc(sizeof(struct inventory));
    temp->prod_num = prod_num;
    temp->cost = cost;
    temp->qty = qty;
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    rear = temp;
}

void appendNode(int prod_num, int qty, float cost)
{
    if (head == NULL)
    {
        create(prod_num, qty, cost);
    }
    else
    { 
        struct inventory *temp = (struct inventory *)malloc(sizeof(struct inventory));
        temp->prod_num = prod_num;
        temp->cost = cost;
        temp->qty = qty;
        temp->prev = rear;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}


int calcSize(struct inventory* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    
    //printf("Size is %d \n",size);
    return size;
}

void appendMiddle(int pos, int prod_num, int qty, float cost, struct inventory *head)
{
    int size = calcSize(head);

   
    if(pos<1 || size <= pos)
    {
        printf("Can't insert, %d is not a valid position\n",pos);

    }
    else
    {
        struct inventory* temp = head;
        struct inventory* newNode = (struct inventory*) malloc(sizeof(struct inventory));
        newNode->prod_num = prod_num;
        newNode->qty = qty;
        newNode->cost = cost;
        newNode->next = NULL;

        while(--pos)
        {
            temp=temp->next;
        }
        struct inventory* temp2 = temp->next;
        
        newNode->next= temp->next;
        newNode->prev = temp;
        
        temp->next = newNode;
        temp2->prev = newNode;
        
    }
}




void traverse()
{
    struct inventory *trav = head;
    while (trav != NULL)
    {
        printf("%d ", trav->prod_num);
        printf("%d ", trav->qty);
        printf("%f ", trav->cost);
        printf("\n\n");
        trav = trav->next;
    }
}

int main()
{
    int n, d; int qty, prod_num; float cost; int pos = 3;
    printf("\n Enter the number of nodes you want insert : ");
    scanf("%d", &n);

    printf("\n\n Appending ... \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter prod_num, qty and cost for node %d: ", i + 1);
        scanf("%d", &d);
        scanf("%d",&qty);
        scanf("%f",&cost);
        appendNode(prod_num, qty, cost);
    }
   printf("\n A.Insert Node at the middle:\n");
   appendMiddle(pos,prod_num, qty,  cost,   head);


    printf("\n B.Insert Node at end data:\n ");
    
    appendNode(prod_num, qty, cost);

    printf("\n Traversing and displaying all nodes! \n");
    traverse();
}