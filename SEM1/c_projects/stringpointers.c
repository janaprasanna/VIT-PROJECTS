#include<stdio.h>
#include<string.h>
int findvow(char*);
void main()
{
  char vowels[50];
  static int result=0;
  printf("enter a string: ");
  gets(vowels);
  for(int i=0;i<50;i++)
  {
    result = findvow(&vowels[i]);
  }
  printf("\nnumber of vowels in the given string is : %d",result);
}
int findvow(char *string)
{
  int i;
  int count=0;
  char arr[10]={'a','A','e','E','i','I','o','O','u','U'};
  for(i=0;i<'\0';i++)
  {
    if(*string==arr[i])
    {
      count= count +1;
    }
  }
  return count;
}
