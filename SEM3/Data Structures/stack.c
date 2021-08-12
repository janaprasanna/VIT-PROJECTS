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
      printf("input data:");
      scanf("%d",&data);
      push(stack, data, &first, &last);
      printf("\nDo you want to add more?");
      fflush(stdin);
      scanf("%c",&choice);
      }while (choice == 'y' || choice == 'Y'&&last<SIZE);
      
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