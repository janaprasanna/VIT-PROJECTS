#include<stdio.h>
#include<string.h>
int main()
{
  int x=2,y=1;
  switch(x)
{
   case 2:
       x=1;
       y=x+1;
       //printf("x=%d\ny=%d",x,y);

  case 1:
        x=0;
        printf("x=%d\ny=%d",x,y);
        break;

    default:
              x=1;
              y=0;
              printf("\n\nx=%d\ny=%d",x,y);
}
  return 0;
}
