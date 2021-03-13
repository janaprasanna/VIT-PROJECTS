#include<stdio.h>
#include<math.h>
int main()
{
  double x;char T;
  printf("enter the radian value:");
  scanf("%lf",&x);
  printf("enter the mode(s,c,t) of function to proceed(sin,cos,tan):");
  fflush(stdin);
  scanf("%c",&T);
  if(T == 's'||T=='S')
  {
    printf("sin(%lf)=%lf",x,sin(x));
  }
  else if(T=='c'|T=='C')
  {
    printf("cos(%lf)=%lf",x,cos(x));
  }
  else if(T=='t'|T=='T')
  {
    printf("tan(%lf)=%lf",x,tan(x));
  }
  else
  {
    printf("invalid function !");
  }
}
