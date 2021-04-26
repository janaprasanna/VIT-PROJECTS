#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("enter the row size and column size for the array: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("enter %d values to the array: \n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("entered matrix is :\n");
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("elements in the traverse form: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        
    }

}