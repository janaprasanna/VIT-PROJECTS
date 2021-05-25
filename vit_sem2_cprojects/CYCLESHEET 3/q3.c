#include<stdio.h>
void space(int);
void main()
{
    int x=1,a=5,b=10;
    printf("%d",a);
    space(x);
    printf("%d",b);
}
void space(int x)
{
    int i;char s = ' '; 
    for(i=1;i<=x;i++)
        printf("%c",s);
}