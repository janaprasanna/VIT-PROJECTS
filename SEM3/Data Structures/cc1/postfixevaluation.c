#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define MAX 20
void push(int);
char pop();
void infix_to_prefix();
int pre(char);
char stack[30],infix[30],prefix[30];
int top = -1;

int main()
{
printf("\nEnter INFIX expression: ");
scanf("%s",infix);
infix_to_prefix();
return 0;
}

void push(int pos)
{
if(top == MAX-1)
{
printf("\nSTACK Overflow\n");
}
else
{
top++;
stack[top] = infix[pos];
}
}

char pop()
{
char ch;
if(top < 0)
{
printf("\nSTACK Underflow\n");
exit(0);
}
else
{
ch = stack[top];
stack[top] = '\0';
top--;
return(ch);
}
return 0;
}

void infix_to_prefix()
{
int x = 0,y = 0;
strrev(infix);
while(infix[x] != '\0')
{

if(infix[x] >= 'a' && infix[x] <= 'z')
{
prefix[y] = infix[x];
y++;
x++;
}

else if(infix[x] == ')' || infix[x] == '}' || infix[x] == ']')
{
push(x);
x++;
}

else if(infix[x] == '(' || infix[x] == '{' || infix[x] == '[')
{
if(infix[x] == '(')
{
while(stack[top] != ')')
{
prefix[y] = pop();
y++;
}
pop();
x++;
}
else if(infix[x] == '[')
{
while(stack[top] != ']')
{
prefix[y] = pop();
y++;
}
pop();
x++;
}
else if(infix[x] == '{')
{
while(stack[top] != '}')
{
prefix[y] = pop();
y++;
}
pop();
x++;
}
}
else
{

if(top == -1)
{
push(x);
x++;
}

else if( pre(infix[x]) < pre(stack[top]))
{
prefix[y] = pop();
y++;

while(pre(stack[top]) > pre(infix[x]))
{
prefix[y] = pop();
y++;
if(top < 0)
{
break;
}
}
push(x);
x++;
}
else if(pre(infix[x]) >= pre(stack[top]))
{
push(x);
x++;
}
}
}

while(top != -1)
{
prefix[y] = pop();
y++;
}

strrev(prefix);
prefix[y] = '\0';
printf("PREFIX expression is : %s ",prefix);
}

int pre(char symbol)
{
if(symbol == '+' || symbol =='-')
{
return(1);
}
else if(symbol == '*' || symbol =='/')
{
return(2);
}
else if(symbol == '^')
{
return(3);
}
else
{
return 0;
}
}