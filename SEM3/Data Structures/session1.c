#include<stdio.h>
#include<string.h>
char *stringrev(char *);
int main()
{
      char string[50];int length, midlen;
      printf("enter a string:");
      gets(string);
      printf("input string:%s",string);
      stringrev(&string);
      printf("\nReverse of the given string:%s",string);
      length = strlen(string);
      printf("\n\nlength = %d\n\n",strlen(string));
      midlen = length/2;
      if (length%2 != 0)
            midlen = length/2;
      
      printf("\nExpected output:");
      for(int i=midlen;i<strlen(string);i++)
            printf("%c",string[i]);

}

char *stringrev(char *str)
{
      printf("\n\nlength2:%d\n\n",strlen(str));
    char c, *start, *end;

    if(!str || !*str)
        return str;

    for(start=str,end=str+strlen(str)-1 ;start < end ; start++,end--)
    {                                           // end = 13 + (13-1)
        c=*start;                        // vit vellore - 11
                                          //c = v      start = v   end = e
        *start=*end;
        *end=c;
    }
    return str;
}