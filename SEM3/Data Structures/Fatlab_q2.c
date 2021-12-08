#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>
void beginsert(int bid, float amt, char date[])  ;
void traverse()  ;
void AlternateNodes();
struct node  
{  
    int busid;
    float trans_amt;
    char  date[20];

    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,bid; float amt; char d[20];  
    do   
    {  
        printf("\nEnter the busid which you want to insert?\n");  
        scanf("%d",&bid);  
        printf("\nEnter transaction amount: ");
        scanf("%f", &amt);
        beginsert(bid, amt, d);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  

    AlternateNodes();

   
}  
void beginsert(int bid, float amt, char date[])  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->busid = bid;  
            ptr->trans_amt = amt;
            strcpy(ptr->date, date);
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
            traverse();
        }  
          
    }  

void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Empty list..");  
        }  
        else  
        {  
            printf("\n\nprinting values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->busid);
                printf("\n%f", ptr->trans_amt);
                printf("%s", ptr->date);  
                ptr = ptr -> next;  
            }  
        }  
     }  

  

void AlternateNodes() 
{
      printf("\nprinting alternative values:\n");
    int counter = 0;
    printf("\nPrinting Alernate nodes of Linked List\n");
    while(head != NULL) {
        if (counter%2 == 0) {
           printf(" %d ", head->busid);
           printf("\n%f", head->trans_amt);
           printf("%s", head->date);
        }
        counter++;
        head = head->next;
    }
}
 