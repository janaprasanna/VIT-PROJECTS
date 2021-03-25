#include<stdio.h>
#include<math.h>
int main()
{
  int P,A=2000,n=12,t=1;
  float interest=0.0,r=0.01;
  printf("enter the amount of loan taken: "); //A = P (1 + [ r / n ]) ^ nt
  scanf("%d",&P);
  while(interest<=P)
  {
    interest=P*(1+(r/n));
    //interest = interest + (pow(interest,n*t));
    //t++;
    printf("month 1: %0.3f",interest);
  }
  return 0;
}
