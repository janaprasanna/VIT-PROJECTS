#include <stdio.h>
#include<conio.h>
int main()
{
  int i;
  for(i=0;i<255;i++)
  {
    if (i%10==0)
    {
      getch();
    }
    else
    {
      printf("\n%d=%c",i,i);
    }
  }
}
