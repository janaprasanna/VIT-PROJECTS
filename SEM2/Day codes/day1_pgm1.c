#include<stdio.h>
#define PRINCIPAL 5000.00
#define PERIOD 10
int main()
{
  int year=0;
  float amount,value,interest_rate;
  amount = PRINCIPAL;
  interest_rate=0.11;
  while(year<=PERIOD)
  {
    printf("year: %2d amount: %8.2f\n",year,amount);
    value = amount + amount*interest_rate;
    year = year +1;
    amount = value;
  }
}
