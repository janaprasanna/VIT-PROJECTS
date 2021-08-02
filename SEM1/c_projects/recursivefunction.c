#include<stdio.h>
int fun(int n)
{
  if(n!=0)
  {
    return n + fun(n-1);
  }
  else
  {
    return n;
  }
}
int main()
{
  int num,result;
  printf("Enter the vlaue of n:");
  scanf("%d",&num);
  result = fun(num);
  printf("sum = %d",result);
  return 0;
}
