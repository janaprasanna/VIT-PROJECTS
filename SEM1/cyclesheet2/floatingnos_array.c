#include<stdio.h>
int main()
{
  int i,j;
  double var1[10];
  printf("Enter 10 values for the array variable : ");
  for(int i=0;i<10;i++)
  {
    scanf("%lf",&var1[i]);
  }
  j=0;
  for(j=0;j<10;j++)
  {
    printf("value of var1[%d] : %lf\n",j,var1[j]);
  }
  return 0;
}
