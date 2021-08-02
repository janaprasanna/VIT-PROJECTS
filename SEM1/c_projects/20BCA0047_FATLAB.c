#include<stdio.h>
void main()
{
	int a[25],i;
	printf("enter values to the array : ");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<25;i++)
	{
		func(&a[i]);
	}
}
void func(int *a)
{
	int i,counteven=0,countodd=0;
	for(i=0;i<25;i++)
	{
		printf("%d  ",*a);
		printf("\naddress of a[%d] : %p",i,&a);
	}
	for(i=0;i<25;i++)
	{
		if(*a%2 == 0)
		{
			counteven++;
		}
		else
		{
			countodd++;
		}
		printf("%d ",counteven);
		printf("%d ",countodd);
	}
	
}
