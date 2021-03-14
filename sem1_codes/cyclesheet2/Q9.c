#include<stdio.h>
void main()
{
  int mul1[3][3],mul2[3][3],i,j,multiply[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the value of mul1[%d][%d]",i,j);
      scanf("%d",&mul1[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the value of mul2[%d][%d]",i,j);
      scanf("%d",&mul2[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      multiply[i][j] = mul1[i][j]*mul2[i][j];
    }
  }
  printf("the multiplied matix is :\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("multiply[%d][%d]:%d\n",i,j,multiply[i][j]);
    }
  }
}
