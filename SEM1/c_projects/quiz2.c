#include<stdio.h>
int main()
{
 char p[] = "welcome";
 int i=0;
 while(p[i]!='\0')
{
 	printf("%c", *(p+i));
	i++;
}
}
