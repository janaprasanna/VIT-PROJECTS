#include<stdio.h>
int main(){
  int n,count=0;
  printf("enter any number:");
  scanf("%d",&n);
  while(n!=0){
    n = n/10;
    count = count + 1;
  }
  printf("number of digits in the entered number is:%d",count);
  return 0;
}
