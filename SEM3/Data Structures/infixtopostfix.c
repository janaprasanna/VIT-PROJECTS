#include<stdio.h>
#include<ctype.h>
void postfix(char *);
char stack[100];
int top = -1;

void push(char letter)
{
    stack[++top] = letter;
}

char pop()
{
    if(top != -1)
        top--;
      printf("%c",stack[top]);
}
/*
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    printf("e:%s\n",e);
    
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }
    return 0;
} */

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
                  pop();
                  while(stack[top] != '(')
                        printf("%c ", stack[top]);
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
                                    pop();
                  }
                        
                  if(exp[i] == '*' || exp[i] == '/')
                  {    
                              if(exp[i]>stack[top])
                                    push(exp[i]);
                              else
                              {
                                    pop();
                              }      
                  }

                  
                  push(exp[i]);
            }
            i++;
      }


}