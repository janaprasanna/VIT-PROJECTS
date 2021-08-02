#include<stdio.h>
int main()
{
  int num;
  printf("Enter a five digit number:");
  scanf("%d",&num);
  if(num<=99999)
  {
    num = num + 11111;
    printf("New number after adding 1 to each digits is: %d",num);
  }
  else
  {
    printf("The entered number is not a five digit number !!");
  }
  return 0;
}
