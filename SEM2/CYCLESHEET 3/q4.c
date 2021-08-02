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
    
    //Y=pow(x,n);

    
    if(n<0)
    {
        n= -n;
        for(int i=1;i<=n;i++)
            Y=Y*(1/x);
    }
    else    
    {
        for(int i=1;i<=n;i++)
            Y=Y*x;
    }
    printf("Y=%f",Y);
}