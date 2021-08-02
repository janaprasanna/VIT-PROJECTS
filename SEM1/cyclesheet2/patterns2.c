#include <stdio.h>
void main()
{
	int i,j,x=1,y=5,z,p=1;
  printf("Patterns(a):\n");
	for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*  ");
    }
    printf("\n");
  }
  printf("Patterns(b):\n");
  for(z=5;z>=1;z--)
  {
    for(i=1;i<=z;i++)
    {
      if(i==1)
      {
        printf("%d  ",x);
      }
      else
      {
        x=x+y;
        y--;
        printf("%d  ",x);
      }
    }
    p=p+1;
    x=p;
    y = 5;
    printf("\n");
  }

}
