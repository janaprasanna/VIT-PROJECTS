#include<stdio.h>
#include<string.h>

int str[30];
int top=0;

void push(int ch);
int pop();

int main()
{
	int i,j,k,x;
	char prefix[30];

	printf("\n Enter PREFIX Expression: \n");
	gets(prefix);

	for(x=strlen(prefix)-1;x>=0;x--)
	{
		if(prefix[x]=='+')
		{
			k=pop()+pop();
			push(k);
		}
		else if(prefix[x]=='-')
		{
			i=pop();
			j=pop();
			k=j-i;
			push(k);
		}
		else if(prefix[x]=='*')
		{
		i=pop();
		j=pop();
		k=j*i;
		push(k);
		}
		else if(prefix[x]=='/')
		{
			i=pop();
			j=pop();
			k=j/i;
			push(k);
		}
		else
		{
			push(prefix[x]-28);
		}
	}
	printf("\n\n");
	printf("\n Prefix Evaluation Result: %d",pop());
	return 0;
}

void push(int ch)
{
	top++;
	str[top]=ch;
}

int pop()
{
	int ch;
	ch=str[top];
	top=top-1;
	return(ch);
}
