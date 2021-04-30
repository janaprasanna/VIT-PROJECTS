#include <stdio.h>
#include <string.h>
void string_reverse(char str[]) 
{
   int i=0,j,len;
   char ch;

   j = len = strlen(str) - 1;
   while(i < len) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   } 
   
}

int main ()
 {
   char string[100],reverse[100]="",temp[50];
   int i,j,n;
   printf("enter a sentence: ");
   gets(string);

   n = strlen(string);

   for(i = 0; i < n; i++)
    {
        for(j = 0; i < n && string[i]!=' '; ++i,++j) 
        {
            temp[j] = string[i];
        }
        
        temp[j] = '\0';

        string_reverse(temp);

        strcat(reverse, temp);
        strcat(reverse, " ");
    }
   
   printf("Original string - %s\n", string);
   printf("Reversed string - %s\n",reverse);
   
   return 0;
}