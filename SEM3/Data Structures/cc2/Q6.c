#include <stdio.h>
#include<stdlib.h>
void addNode(int);
void sortList();
void display();
struct node 
{
      int data;
      struct node *next; 
};
struct node *head = NULL;
struct node *ptr=NULL;

void addNode(int data) 
{
      struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
      newNode->data = data;
      newNode->next = NULL;
      if(head == NULL) 
      {
            head = newNode;
            ptr = newNode;
            //tail = newNode; 
      }
      
      ptr->next = newNode;
      ptr = newNode;
      
}
void sortList() 
{
      struct node *current = head, *index = NULL; 
      int temp;
      if(current == NULL) 
      {
            printf("\nNo elements to sort.");
      }
      else 
            {
                  while(current != NULL) 
                  {
                        index = current->next;
                        while(index != NULL) 
                        {
                              if(current->data > index->data) 
                              {
                                    temp = current->data; 
                                    current->data = index->data; 
                                    index->data = temp;
                              }
                              index = index->next; 
                        }
                        current = current->next; 
                  }
            }     
 }
void display() 
{
      struct node *current = head; 
      if(head == NULL)
      {
            printf("List is empty \n");
      }
      while(current != NULL) 
      {
            printf("%d ", current->data);
            current = current->next; 
      }
      printf("\n"); 
}
int main() 
{
      addNode(13);
      addNode(21);
     addNode(30);
      printf("\n Unsorted numbers are: \n "); 
      display();
      sortList();
      printf("\n Sorted numbers are: \n");
      display();
      return 0; 
}