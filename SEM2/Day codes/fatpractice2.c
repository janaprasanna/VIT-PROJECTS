# include <stdio.h>
#include<string.h>
# define SIZE 4
//Structure_______________________
struct students
{
    int rno,age;
    char name[40];
    float maths;


};
//Functions________________________
    int checkmarks( struct students x[] )
    {
        int i = 0;
        for( i = 0; i < SIZE; i++ )
        {
            printf("\nEnter Name : ");
            fflush(stdin);
            gets(x[i].name);
            printf("\nEnter marks : ");
            scanf("%f",&x[i].maths);

        }

    }
int main()
{
    int i = 0;
    struct students x[SIZE];
    char name[50];
    float math;
    /*struct making */

    checkmarks(x);

    /* How to Make a file ! */
    FILE *fp;
    FILE *fs;
   fp =  fopen( "/Users/janaprasanna/My Drive/text.txt","w" );
    printf( "\nEntering write mode" );
    fprintf(fp,"_______________________________________________\n");
    for( i = 0; i < SIZE ; i++ )
    {
        fprintf( fp,"%s %f\n",x[i].name,x[i].maths );


    }

        printf("\nData Processed ");
        fclose(fp);


      fp =   fopen( "/Users/janaprasanna/My Drive/text.txt","a");
        fprintf(fp,"prasanna 89.44");
         fprintf(fp,"\n_________________________________________________\n");
        fclose(fp);

      fs =  fopen("/Users/janaprasanna/My Drive/text.txt","r");
       for( i = 0; i <SIZE+1+2; i++ )
       {

           fscanf(fs,"%s %f",&name,&math);
            if(strcmp(name,"var") == 0 )
           {
               printf("\n %s %f",name,math);
           }

       }
       fclose(fs);


}