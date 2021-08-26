#include<iostream>
using namespace std;
int main()
{
      char s1[100]="hello", s2[100]="Hello";
      int result;
      result = zstrcmp(s1, s2);
      return 0;
}
int zstrcmp(char s1[], char s2[])
{
      int len1, len2, i, j;
      for(i=0;s1[i]:i++)
            len1++;
      for(j=0;s2[j];j++)
            len2++;
      
      if(len1 == len2)
      { 
            for(i=0;s1[i];i++)
            {
                  if(s1[i]==s2[i])
                        return 0;
                  else if(s1[i]>s2[i])
                        return 1;
                  else 
                        return -1;
            }
      }
      else if(len1>len2)
      {
            for(i=0;s1[i];i++)
            {
                  if(s1[i]==s2[i])
                        return 0;
                  else if(s1[i]>s2[i])
                        return 1;
                  else 
                        return -1;
            }
      }
      else{
            for(i=0;s2[i];i++)
            { 
            if(s1[i]==s2[i])
                  return 0;
            else if(s1[i]>s2[i])
                  return 1;
            else 
                  return -1;
            }
      }
}