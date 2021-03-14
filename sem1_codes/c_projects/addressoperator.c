#include<stdio.h>
void display(int *num1)
{
  printf("%d",*num1);
}
int main(){
  int i;
  int arr[5]={1,2,4,3,5};
  for(i=0;i<=5;i++)
  {
    display(&arr[i]);
  }
  return 0;
}
