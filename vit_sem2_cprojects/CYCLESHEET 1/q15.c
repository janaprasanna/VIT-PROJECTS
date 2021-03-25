#include<stdio.h>

int main()
{
  int n,i,type,looptype;
  printf("enter the number of characters to be stored in the array : ");
  scanf("%d",&n);
  char arr[n];
  printf("enter the type of loop to be used(1 - while,2 - dowhile,3 - For: ");
  scanf("%d",&type);
  if(type==1)
  {
    printf("enter %d characters to the array: ",n);
    i=0;
    while(i<n)
    {
      fflush(stdin);
      scanf("%c",&arr[i]);
      i++;
    }
  }
  else
    printf("sorry ! this version of loop is not included in the program.");
  printf("enter the type of loop(1.for,2.while,3.dowhile) to be used to display the ASCII codes:");
  scanf("%d",&looptype);
  if(looptype==1)
  {
    printf("\nASCII values for the entered characters is :\n");
    for(i=0;i<n;i++)
    {
      printf("\n%d",arr[i]);
    }
  }
  else if(looptype==2)
  {
    i=0;
    while(i<n)
    {
      printf("\n%d",arr[i]);
      i++;
    }
  }
  else
  {
    i=0;
    do
    {
      printf("\n%d",arr[i]);
      i++;
    }while(i<n);
  }
  return 0;
}
