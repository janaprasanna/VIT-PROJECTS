#include<stdio.h>
#include<math.h>
int main()
{
  double y,x=0.0,z,i ;
  for(i=0.00;i<10.00;i++)
  {
    for(z=i;z<=(i+0.90);z=z+0.10)
    {
      x = z;
      y=exp(z);
      printf("exp(%0.1lf): %lf\n",z,y);
    }
    printf("\n");
  }
  return 0;
}
