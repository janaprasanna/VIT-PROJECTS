#include<iostream>
#include<string.h>
using namespace std;
int MaxOfThree(int , int, int);
double MaxOfThree(double, double, double);
char* MaxOfThree(char *, char *, char *);
int main()
{
      int i1=2, i2=3, i3=54, result1;
      double d1=443.334, d2=3.1234, d3=5.54, result2;
      char str1[50]="hello", str2[50]="hi", str3[50]="welcome";
      result1 = MaxOfThree(i1, i2, i3);
      result2 = MaxOfThree(d1, d2, d3);
      cout<<"Max of integer values: "<<result1<<endl;
      cout<<"Max of double values: "<<result2<<endl;
      cout<<"Max of strings: "<<MaxOfThree(str1, str2, str3)<<endl;
      return 0;
}
int MaxOfThree(int i1, int i2, int i3)
{
      if(i1>i2 && i1>i3)
            return i1;
      else if(i2>i1 && i2>i3)
            return i2;
      else  
            return i3;
}
double MaxOfThree(double d1, double d2, double d3)
{
      if(d1>d2 && d1>d3)
            return d1;
      else if(d2>d1 && d2>d3)
            return d2;
      else  
            return d3;
}
char* MaxOfThree(char str1[], char str2[], char str3[]) //char* - returning a pointer to a char
{
      if(strcmp(str1, str2)>0 && strcmp(str1, str3)>0)  // A    b    a 
      {
            return str1;
      }
      else if(strcmp(str2, str1)>0 && strcmp(str2, str3)>0)
      {
            return str2;
      }
      else  
            return str3;
    
}