#include<stdio.h>
int main(){
  int n,count=0,temp=0;
  printf("enter any number:");
  scanf("%d",&n);
  temp=n;
  for(int i=0;i<=n;i++)
  {
    n = n/10;
    count = count + 1;
  }
  printf("number of digits in the entered number is:%d",count);
  return 0;
}
