#include<stdio.h>
void space(int);
void main()
{
    int x=1,arr[5]={4,7,3,4,1},i;
   for(i=0;i<5;i++)
   {
       printf("val%d=%d",i+1,arr[i]);
       space(2);
   }
}
void space(int x)
{
    int i;char s = ' '; 
    for(i=1;i<=x;i++)
        printf("%c",s);
}