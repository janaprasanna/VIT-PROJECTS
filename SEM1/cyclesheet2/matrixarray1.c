#include<stdio.h>
void main()
{
  int matrix1[3][2],matrix2[3][2],sum[3][2],i,j,x,y;
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("Enter the values for matrix1[%d][%d]:",i,j);
      scanf("%d",&matrix1[i][j]);
    }
  }
  for(x=0;x<3;x++)
  {
    for(y=0;y<2;y++)
    {
      printf("Enter the values for matrix2[%d][%d]:",x,y);
      scanf("%d",&matrix2[x][y]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    {
      sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  printf("sum of the two matices are:\n");
  for(x=0;x<3;x++)
  {
    for(y=0;y<2;y++)
    {
      printf("sum[%d][%d]:%d\n",x,y,sum[x][y]);
    }
  }
}
