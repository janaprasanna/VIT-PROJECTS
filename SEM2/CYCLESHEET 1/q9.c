#include<stdio.h>
int main()
{
  int a,b,i,sum=0;
  printf("enter first number:");
  scanf("%d",&a);
  printf("enter second number:");
  scanf("%d",&b);
  if(a>b)
  {
    for(i=1;i<=b;i++)
    {
      sum = sum + a;
    }
  }
  else
  {
    for(i=1;i<=a;i++)
    {
      sum = sum + b;
    }
  }
  printf("%d * %d = %d",a,b,sum);
  return 0;
}
