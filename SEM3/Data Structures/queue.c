#include<stdio.h>
#define SIZE 3
void push(float *, int*, int *, float );
void pop(float *, int *, int *);
void traverse(float *, int*, int *);
void main()
{
      int rear = 0,front = 0;
      float queue[SIZE], val;
      char choice;
      int op;
    
      
            
            do
            {
                  printf("\n1.Push\n2.pop\n3.Traverse\n4.exit\n\nchoose the operation:");
                  scanf("%d",&op);
                  switch(op)
                  {
                        case 1:
                              
                              printf("\ninput value:");
                              scanf("%f",&val);
                              push(queue, &front, &rear,val);
                              break;

                        case 2:
                              pop(queue, &front, &rear);
                              break;
                        
                        case 3: 
                              traverse(queue, &front, &rear);
                              break;
                        
                        default:
                              printf("Operation terminated!");
                              
                  }
            } while (op!=4);
            
            /*
            printf("Do you want to edit the queue?");
            fflush(stdin);
            scanf("%c",&choice); */
      
}

void push(float queue[], int *front, int *rear, float val)
{
      
      if(*rear<0)
            printf("\nQueue underflow!!");
      else if(*rear>SIZE-1)
            printf("Queue reached the max limit! cannot add.");
      else
      {
            
            printf("\nelement inserted...");
            queue[*rear] = val;
            *rear = *rear + 1;
      }
}

void pop(float queue[], int *front, int *rear)
{
      if(*front<0)
            printf("Queue is empty!");
      else if(*front > *rear)
            printf("Queue overflow!!");
      else{
            printf("Item popped successfully...!");
            *front++;
      }
}

void traverse(float queue[], int *front, int *rear)
{
      if(*rear<=0)
            printf("Queue is empty!");
      else
      { 
            printf("\nQueue:");
            for (int i= *front;i< *rear;i++)
                  printf("%.1f  ",queue[*front]);
      }
}