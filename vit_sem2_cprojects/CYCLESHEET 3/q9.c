#include <stdio.h>
#include <stdlib.h>

int main()
{

    
   int num;char str[100];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("/Users/janaprasanna/My Drive/program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   
   if((gets(str))!=EOF)
   {
       fprintf(fptr,"%s",str);
   }
   fclose(fptr);

   return 0;
}