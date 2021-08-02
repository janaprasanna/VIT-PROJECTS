#include<stdio.h>
void main()
{
    char string[50];
    int a,b,result=0;
    for(a=0;a<=5;a++)
    {
        printf("Happy birthday %s\n",a==4?"dear rohan":"to you");
        
    }
    // program 2
    a=3;b=6;
    printf("the given number is %s",a%2==0?"even":"odd");
    printf("\nthe given number is %s",a%2==0?"not prime":"");
}