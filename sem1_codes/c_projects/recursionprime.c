#include<stdio.h>
void factors(int num, int i,int j)
{
  int flag;
  if(num%i==0)
  {
    if(i%j==0)
    {
      flag++;
      factors(num,i,j+1);
    }
    if(flag==2)
    {
      printf("%d",i);
    }
  }
  else
  {
    factors(num,i+1,1);
  }


}
int main()
{
  int num;
  printf("Enter a positive integer number:");
  scanf("%d", &num);
  printf("\nPrime Factors of %d using recursion\n", num);
  factors(num,2,1);
}
