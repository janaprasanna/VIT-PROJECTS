#include<stdio.h>
int main()
{
  int i,j,value,var1[25],count=0;
  printf("Enter 25 values for the array variable : ");
  for(int i=0;i<25;i++)
  {
    scanf("%d",&var1[i]);
  }
  printf("Enter a value to search in the array:");
  scanf("%d",&value);
  j=0;
  while(j<25)
  {
    if(var1[j]==value)
    {
      printf("the entered value is found in the array.\n");
      count++;
    }
    j++;

  }
  printf("Number of times it appeared in array is : %d\n",count);
  return 0;
}
