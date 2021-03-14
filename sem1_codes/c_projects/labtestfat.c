#include<stdio.h>
void get();
void main()
{
  printf("enter the values to the array : ");
  get();
}
void get()
{
  int a[25],i,j,countodd,counteven;
  for(i=0;i<25;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n the values and its  address  in the array are : ");
  for(i=0;i<25;i++)
  {
    printf("%d  %p",a[i],&a[i]);
    printf("\n");
  }
  for(i=0;i<25;i++)
  {
    if(a[i]%2==0)
    {
      counteven++;
    }
    else
    {
      countodd++;
    }
    }
    printf("\n\nnumber odd numbers are : %d",countodd);
    printf("\n\nnumber of even numbers are : %d",counteven);
}
