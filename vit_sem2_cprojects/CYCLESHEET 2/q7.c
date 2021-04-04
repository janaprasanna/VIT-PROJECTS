#include<stdio.h>
void main()
{
	int a[3][4],b[3][4],i,j,sum[3][4]={(0,0)},max1,max2,min1,min2;
	printf("enter the  elements for first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("A[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the  elements for second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("B[%d][%d]:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j] = a[i][j] + b[i][j]; 
		}
	}
	printf("\nsum of the two matrices: \n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<4;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	min1 = a[0][0];
	max1 = a[2][3];
	min2 = b[0][0];
	max2 = b[2][3];
	for(i=0;i<3;i++)    // checking max and min value for first matrix
	{
		for(j=0;j<4;j++)
		{
			if(min1>a[i][j])
				min1 = a[i][j];
			if(max1<a[i][j])
				max1 = a[i][j];
		}
	}
	for(i=0;i<3;i++) //checking max and min value for second matrix
	{
		for(j=0;j<4;j++)
		{
			if(min2>b[i][j])
				min2 = b[i][j];
			if(max2<b[i][j])
				max2 = b[i][j];
		}
	}
	if(max1>max2)
		printf("\nmaximum element out of the two matrice: %d",max1);
	else
		printf("\nmaximum element out of the two matrice: %d",max2);
		
	if(min1>min2)
		printf("\nminimum element out of the two matrice: %d",min2);
	else
		printf("\nminimum element out of the two matrice: %d",min1);
}
