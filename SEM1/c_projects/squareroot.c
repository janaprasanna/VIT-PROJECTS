#include<stdio.h>
int main(){
  double num,temp=0;
  double i;
  printf("Enter the number to find its square root:");
  scanf("%lf",&num);
  temp=num/2;
  for(i=0;i<=temp;i++)
  {
    printf("the value of i: %lf",num/i);
    if(num/i==i)
    {
      printf("The square root of %lf is : %lf",num,i);
    }
  }
  return 0;
}
