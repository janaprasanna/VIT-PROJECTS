#include<stdio.h>
#include <stdlib.h>

void push(int *, int, int *, int);
void pop(int *, int *);
int stack_op(int , int);
int main()
{
      int  n=0, *stk, result=0;
    
            printf("\nEnter number of elements:");
            scanf("%d",&n);
            stk = (int*) malloc(n * sizeof(int));
            do{
                  result = stack_op(*stk, n);
            }while(result == 0);
            
            
      return 0;
      
}
int stack_op(int stk, int n)
{
      int choice, data, first=0, last=n;
      do
      {
            printf("\n\n\n1.push_even\n2.push_odd\n3.pop\n4.exit\n\n\n");
            fflush(stdin);
            scanf("%d",&choice);
            switch (choice)
            {
                  case 1:
                        printf("\ninput data (negative even numbers only):");
                        fflush(stdin);
                        scanf("%d",&data);
                        if(data<0 && data%2==0)
                            push(&stk, data, &first, n);
                        else  
                        {
                              printf("Invalid number.Re - enter!");
                              return 0;
                        } 
                        break;
                  case 2:
                        if(first == last/2)
                        { 
                              printf("\ninput data (negative odd numbers only):");
                              fflush(stdin);
                              scanf("%d",&data);
                              if(data<0 && data%2!=0)
                              push(&stk, data, &first, n);
                              else  
                              {
                                    printf("Invalid number.Re - enter!");
                                    return 0;
                              } 
                              break;
                        }
                        else  
                              printf("\nFirst Half of stack is not full.");
                  case 3:
                        pop(&stk, &first);
                        break;

            }
            
      } while (choice<4);
            
            
    
}
void push(int stk[],int data,int *f, int n)
{
      if(*f < 0)
            printf("\nstack underflow !!");
      else if(*f > n-1)
            printf("\n stack is full. cannot insert !!");
      else 
      {
            printf("Data inserted successfully.\n");
            stk[*f]= data;
            *f =  *f + 1;
      }
      
}
void pop(int stk[], int *top)
{
      if(*top < 0)
            printf("Stack is empty! cannot perform the operation.");
      else
      {
            *top = *top - 1;
            printf("Data popped.");
            printf("Data : %d",stk[*top]);
      }
}