#include<stdio.h>
int main()
{
  char arr[5],i;
  printf("enter a five letter word:");
  gets(arr);
  for(i=0;i<5;i++)
  {
    arr[i]= arr[i] + 30;
  }
  printf("the encoded string is : \n");
  for(i=0;i<5;i++)
  {
    printf("%c  ",arr[i]);
  }
}
