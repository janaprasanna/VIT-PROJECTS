#include<stdio.h>
#define SIZE 5
void push(int [], int, int *, int *);
void pop(int [], int *, int *);
void main()
{
      int stack[SIZE], first=0, last=SIZE - 1,data;
      char choice;
     
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
                        push(stack, data, &first, &last);
                        break;
                  
                  case 2:
                        pop(stack, &first, &last);
                        break;

            }
            printf("\nstack: ");
            for(int i=0;i<first;i++)
                  printf("%d  ",stack[i]);
            
     } while (choice!=3);
     
     
      
      
}
void push(int stack[],int data,int *f, int *l)
{
      if(*f < 0)
            printf("\nstack underflow !!");
      else if(*f >= SIZE)
            printf("\n stack is full. cannot insert !!");
      else 
      {
            printf("Data inserted successfully.\n");
            printf("stack: ");
            stack[*f] = data;
            *f =  *f + 1;
            for(int i=0;i<*f;i++)
            {
                  printf("%d,",stack[i]);
            }
      }
}
void pop(int stack[], int *f, int *l)
{
      if(*l == 0)
            printf("Stack is empty! cannot perform the operation.");
      else
      {
            printf("Data popped.");
            printf("Data : %d",stack[*l]);
            *l = *l - 1;

      }
}