#include<stdio.h>
#include<ctype.h>
void postfix(char *);
char stack[100];
int top = -1;

void push(char letter)
{
    stack[++top] = letter;
}

int pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}


int main()
{
      char expression[50];
      printf("enter a expression:");
      gets(expression);  //     (a + b) * c
      postfix(expression);
   
      return 0;
}
void postfix(char exp[])
{

      int i=0;
      while(exp[i]!='\0')
      {
            //   (a + b) * c
            if(exp[i]>=65 && exp[i]<=122)
                  printf("%c ",exp[i]);  //stack:  (  a +
            else if(exp[i] == '(')
                  push(exp[i]);
            else if(exp[i] == ')')
            {
                  while(stack[top] != '(')
                  {
                        printf("%c " ,pop());
                  }
                        
            }
            else
            {
                  if(exp[i] == '(')
                       push(exp[i]);
                  if(exp[i] == '+' || exp[i] == '-')
                  {     
                              if(exp[i]>stack[top])
                                    push(exp[i]);
                              else
                                 printf("%c " ,pop());
                                    
                  }
                        
                  if(exp[i] == '*' || exp[i] == '/')
                  {    
                              if(exp[i]>stack[top])
                                    push(exp[i]);
                              else
                              {
                                   printf("%c " ,pop());
                              }      
                  }

                  
                 // push(exp[i]);
            }
            i++;
      }
       do
      {
          if(stack[top]!='(')
            printf("%c " ,pop());
      }while(top!=-1);
      


}