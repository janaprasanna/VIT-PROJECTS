#include<stdio.h>
#define SIZE 3
void push(int [], int, int *);
void pop(int [], int *);
void main()
{
      int stack[SIZE], first=0, last=SIZE ,data;
      int choice;
     
     do
     {
            printf("\n\n\n1.push\n2.pop\n3.exit\n\n\n");
            fflush(stdin);
            scanf("%d",&choice);
            switch (choice)
            {
                  case 1:
                        printf("input data:");
                        fflush(stdin);
                        scanf("%d",&data);
                        push(stack, data, &first);
                        break;
                  
                  case 2:
                        pop(stack, &first);
                        break;

                  default:
                        printf("Invalid Operation details!!");


            }
            printf("\nstack: ");
            for(int i=0;i<first;i++)
                  printf("%d  ",stack[i]);
            
     } while (choice!=3);
     
     
      
      
}
void push(int stack[],int data,int *f)
{
      if(*f < 0)
            printf("\nstack underflow !!");
      else if(*f > SIZE-1)
            printf("\n stack is full. cannot insert !!");
      else 
      {
            printf("Data inserted successfully.\n");
            stack[*f] = data;
            *f =  *f + 1;
      }
}
void pop(int stack[], int *top)
{
      if(top < 0)
            printf("Stack is empty! cannot perform the operation.");
      else
      {
            printf("Data popped.");
            *top = *top - 1;
            printf("Data : %d",stack[*top]);
      }
}