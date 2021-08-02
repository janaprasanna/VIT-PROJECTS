#include<stdio.h>
int main()
{
  int num1=0,num2=1,i,n,temp =0;
  printf("Enter the range for fibonacci series: ");
  scanf("%d",&n);
  printf("fibonacci series are : %d\t%d",num1,num2);
  for(i=3;i<=n;i++)
  {
    temp = num1+num2;
    num1=num2;
    num2=temp;
    printf("\t%d",temp);
  }
  return 0;
}
