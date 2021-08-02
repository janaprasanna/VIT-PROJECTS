#include<stdio.h>
void main()
{
  int arr1[25],i,j,counteven=0,countpositive=0,countnegative=0;
  printf("Enter 25 characters for the array variable:");
  for(i=0;i<25;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(j=0;j<25;j++)
  {
    if(arr1[j]%2 == 0 && arr1[j]>0)
    {
      counteven++;
    }
    if(arr1[j]<0 && arr1[j]<0)
    {
      countnegative++;
    }
    if(arr1[j]>0)
    {
      countpositive++;
    }
    else
      {
        continue;
      }
  }
  printf("Even numbers from array are :%d",counteven);
  printf("\nNegative values from the array are:%d",countnegative);
  printf("\nPositive values from the array are: %d\n",countpositive);
}
