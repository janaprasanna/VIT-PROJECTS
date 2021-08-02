#include<stdio.h>
int main()
{
  float temp;
  printf("enter a value of temp:");
  scanf("%f",&temp);
  if(temp<0)
  {
    printf("%s","ICE");
  }
  else if(temp>=0 && temp<=100)
  {
    printf("%s","WATER");
  }
  else
  {
    printf("%s","STREAM");
  }
}
