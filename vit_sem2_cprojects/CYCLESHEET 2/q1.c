#include<stdio.h>
#include<math.h>
int main()
{
  double y,x;float i,j;
  printf("X  ");
  for(i=0.0;i<=0.9;i=i+0.1)
  {
    printf(" %.1f\t   |",i);
  }
  for(i=0.0;i<=10.0;i++)
  {
    printf("%.1lf|",i);
    for(j=0.0;j<=0.9;j=j+0.1)
    {
      
      x = i + j;
      y = exp(-x);
      printf(" %.4lf\t ",y);
    }
    printf("\n");
  }
  return 0;
}
