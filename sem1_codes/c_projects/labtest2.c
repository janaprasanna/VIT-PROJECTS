#include<stdio.h>
int main()
{
  int arr1[25];
  int i;
  printf("enter values to the array: ");//reading values to array
  for(i=0;i<25;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("values in array: \n");
  for(i=0;i<25;i++)
  {
    printf("%d\n",arr1[i]);//displaying array elements
    printf("\naddress of arr1[%d]:%p \n",i,&arr1[i]);
  }
  int count_even=0,count_odd=0;
  printf("\n");
  for(i=0;i<25;i++)
  {
    if(arr1[i]%2==0)
    {
      count_even++;
      printf("\neven : %d\n",arr1[i]);
    }
    else
    {
      count_odd++;
      printf("\nodd: %d\n",arr1[i]);
    }
  }
}
