#include<stdio.h>
int main(){
  int n,rem=0,rev=0,temp=0;
  printf("enter any number:");
  scanf("%d",&n);
  temp=n;
  while(n>0){
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
  }
  if(rev == temp){
    printf("the entered number is a paingrome");
  }
  else{
    printf("\nthe entered number is not a palindrome");
  }
  printf("\nthe reverse of the number is:%d",rev);
  return 0;
}
