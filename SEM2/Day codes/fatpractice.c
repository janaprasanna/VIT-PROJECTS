#include<stdio.h>
int main ()
{
 
   FILE *fp;
   int num,number;
   fp = fopen("/Users/janaprasanna/My Drive/test.txt","w");
    printf("enter numbers(-1) to terminate:\n");
   for(int z=0;z<50;z++)
   {
      scanf("%d",&num);
      if(num==-1)
      {
        break;
      }
      putw(num,fp);
     
   }
   fclose(fp);
 
   fp = fopen("/Users/janaprasanna/My Drive/test.txt","r");
   
   while((number=getw(fp))!=EOF)
   {
    
      printf("Data in test.txt file is %d \n", number);
   }
   fclose(fp);
   return 0;
}