#include<stdio.h>
int main()
{
  int i,num,sum=0,r;
  printf("Enter a four digit number:");
  scanf("%d",&num);
  for(i=0;i<4;i++)
  {
    r=num%10;
    if(i==0)
    {
      sum=sum+r;
    }
    if(i==3)
    {
      sum=sum+r;
    }
    num=num/10;
  }
  printf("%d",sum);
}
