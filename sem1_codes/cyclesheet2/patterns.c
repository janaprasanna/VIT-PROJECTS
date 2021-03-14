#include <stdio.h>
void main()
{
	int i,j,x=1,y=5,z;
  /*printf("Patterns(a):\n");
	for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }*/
  printf("Patterns(b):\n");
	printf("\n");
	for(i=1;i<=5;i++)
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
	printf("\n");
	x=2;
	y=5;
	for(i=1;i<=4;i++)
	{
		if(i==1)
		{
			printf("%d  ",x);
		}
		else
		{
			x=x+y;
			printf("%d  ",x);
			y--;
		}
	}
	printf("\n");
	x=3;
	y=5;
	for(i=1;i<=3;i++)
	{
		if(i==1)
		{
			printf("%d  ",x);
		}
		else
		{
			x=x+y;
			printf("%d  ",x);
			y--;
		}
	}
	printf("\n");
	x=4;
	y=5;
	for(i=1;i<=2;i++)
	{
		if(i==1)
		{
			printf("%d  ",x);
		}
		else
		{
			x=x+y;
			printf("%d  ",x);
			y--;
		}
	}
	printf("\n");
	x=5;
	printf("%d",x);

}
