#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=15;i++)
    {
        printf("\n");
        for(j=1;j<=18;j++)
        {

            if(i==4||i==5||i==6)
            {
                if(j<=4)
                    printf("*");
            }
            else if(i==10||i==11||i==12)
            {
                if(j>=15&&j<=18)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf("*");
        }
    }
    return 0;
}
