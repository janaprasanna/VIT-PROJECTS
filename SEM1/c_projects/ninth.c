#include<stdio.h>
void main()
{
  int i,j,mul1[3][3],mul2[3][3],multiply[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the values of mul1[%d][%d]:",i,j);
      scanf("%d",&mul1[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the values of mul2[%d][%d]:",i,j);
      scanf("%d",&mul2[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      multiply[i][j]=mul1[i][j]*mul2[i][j];
    }
  }
  printf("The multiplied matrix is : \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("multiply[%d][%d]:",i,j,multiply[i][j]);
    }
  }


}
