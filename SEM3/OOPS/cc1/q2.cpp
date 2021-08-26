#include<iostream>
using namespace std;
bool is_palindrome(char *);
int main()
{
      char string[50];
      cout<<"input a string:";
      gets(string);
      if(is_palindrome(string))
            cout<<"The given string is palindrome";
      else  
            cout<<"\nThe given string is not a palindrome.";
      return 0;
}
bool is_palindrome(char str[])
{
      char temp[50];
      int n = strlen(str), i, j;
      for(i=0,j=n-1;j>=0;i++,j--)
      {
            temp[i] = str[j];
      }
      temp[i] = '\0';
      for(i=0;str[i];i++)
      {
            if(str[i] == temp[i])
                  return true;
            else 
                  return false;
      }
}