#include<stdio.h>
#include<math.h>
void main()
{
    float x,Y=1;int n;
    printf("enter 'x' :");
    scanf("%f",&x);
    fflush(stdin);
    printf("enter 'n': ");
    scanf("%d",&n);
    
    Y=pow(x,n);

    printf("Y=%f",Y);
    
}