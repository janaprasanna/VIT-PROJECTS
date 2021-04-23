#include<Stdio.h>
void main()
{
    int first[10],second[10],i=0,j,temp=0;
    printf("enter the values for 1st array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&first[i]);
    }
    printf("enter the values for 2nd array: \n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&second[j]);
    }
    printf("\n i = %d",i);
    for(j=0;j<5;j++)
    {
        first[i++]=second[j];
    }
    printf("\nThe array elements are merged array:\n");
    for(i=0;i<10;i++)
    {
       for(j=i+1;j<10;j++)
       {
            if(first[i]>first[j])
            {
                temp = first[i];
                first[i]=first[j];
                first[j]=temp;
            }
       }
    }
    printf("\nsorted array: ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",first[i]);
    }

}