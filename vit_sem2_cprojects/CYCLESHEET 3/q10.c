#include <stdio.h>
#include <string.h>

int main()
{
    char name[50],regno[50],check[50],lname[50];
    int i,chk = -1;
    //get input from user to check - >
    printf("Enter The regno to check = ");
    fflush(stdin);
    gets(check);
    
    //
    FILE *filepointer;
    filepointer = fopen("/Users/janaprasanna/My Drive/student.txt","r");
    for(i = 0; i < 20;i++) //20 refers to number of lines in the file
    {
        fscanf( filepointer, "%s %s %s", regno, name,lname);
        chk = strcmp(check,regno);
        if(chk == 0)
        {
            printf("STUDENT FOUND!\n");
            printf("----------------------------------------------------------------\n");
            printf("First Name:");
            puts(name);
            printf("Last Name : ");
            puts(lname);
            puts(regno);
            printf("---------------------------------------------------------------------\n");
            break;
        }
        else
            printf("\nError Not found \n ");

        return 0;
    }
}
