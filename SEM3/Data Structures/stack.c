/* case 2:
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
                              printf("\nFirst Half of stack is not full.");*/



#include<stdio.h>
#include <stdlib.h>

void push(int *, int, int *, int *);
void pop(int *, int *);
void display(int *, int *);
int stack_op(int  , int);
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
            printf("\n\n\n1.push_even\n2.push_odd\n3.pop\n4.View\n5.exit\n\n\n");
            fflush(stdin);
            scanf("%d",&choice);
            switch (choice)
            {
                  case 1:
                        printf("\ninput data (negative even numbers only):");
                        fflush(stdin);
                        scanf("%d",&data);
                        if(data<0)
                        {
                              if(data%2 == 0 )
                              {
                                    last = n/2;
                                    push(&stk, data, &first, &last);               // even nos to be pushed for first half
                              }
                                    
                        }
                            
                        else  
                        {
                              printf("Invalid number.Re - enter!");
                              return 0;
                        } 
                        break;
                   case 2:
                        if(first == n/2)
                        { 
                              printf("\ninput data (negative odd numbers only):");
                              fflush(stdin);
                              scanf("%d",&data);
                              if(data<0)
                              {
                                    if(data%2 != 0 )
                                    {
                                          push(&stk, data, &first, &last);               // even nos to be pushed for first half
                                    }      
                              }
                              
                              else  
                              {
                                    printf("Invalid number.Re - enter!");
                                    return 0;
                              } 
                              break;
                        }
                        else
                              printf("\nFirst half of the stack is not full.");
                        break;
                  
                  case 3:
                        pop(&stk, &first);
                        break;
                  
                  case 4:
                        display(&stk, &first);
                        break;

            }
            
      } while (choice < 5);
            
            
    
}
void push(int stk[],int data,int *f, int *last)
{
      if(last < 0)
            printf("\nstack underflow !!");
      else if(*f > *last)
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

void display(int stk[], int *top)
{
      printf("\nstack: ");
      for(int i=0; i< *top; i++)
      {
            printf("%d ",*(stk+i));
      }
}