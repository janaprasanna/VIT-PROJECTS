#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j,temp[2][2];
    printf("enter 9 elements for  1st array: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 9 elements for  2nd array: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
                temp[i][j] = a[i][j];
                a[i][j]=b[i][j];
                b[i][j] = temp[i][j];
            }
        }
    }
    printf("\nafter interchanging the diagnols : \n");
    printf("arrays 1 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("array 2 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}