# include <stdio.h>
int main()
{
  int numbers[10]={1,2,3,4,5,6,7,8,9,10};
  int answer = numbers[0]+numbers[1]+numbers[2];
  int answer1 = 0[numbers]+4[numbers]+9[numbers];
  int answer2 = *(numbers+5) * *(numbers+6) * *(numbers+7);
  int answer4 = *(numbers +9) / *(numbers+4);
  printf("\n numbers[0]+numbers[1]+numbers=%d", answer);
  printf("\n 0[numbers]+4[numbers]+9[numbers]=%d",answer1);
  printf("\n *(numbers+5) * *(numbers+6) * *(numbers+7)=%d",answer2);
  printf("\n *(numbers +9) / *(numbers+4)=%d",answer4);
  return 0;
}
