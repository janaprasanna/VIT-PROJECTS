#include<iostream>
using namespace std;
int zstrcmp(char s1[]="hello", char s2[]="hello");
int main()
{
      char s1[100]="hello", s2[100]="Hello";
      int result, result2;
      result = zstrcmp();
      result2 = zstrcmp(s1, s2);
      cout<<"\n\nTEST 1\nzstrcmp result(using default arguments): "<<result;
      cout<<"\n\nTEST 2\nzstrcmp result(without default arguments): "<<result2;
      return 0;
}
int zstrcmp(char s1[], char s2[])
{
      int len1, len2, i, j;
      for(i=0;s1[i];i++)
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