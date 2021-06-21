#include<stdio.h>
#include<string.h>
#define SIZE 2
void checkchem(char [SIZE][15] ,float marks[SIZE][3]);
int main()
{
    char sname[SIZE][15];float marks[SIZE][3] ;     // stdno, maths, phy , chem
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        printf("enter student name:");fflush(stdin);
        gets(sname[i]);
        printf("enter marks (maths,phy,chem):\n");
        for(j=0;j<3;j++)
           {
               scanf("%f",&marks[i][j]);
           }
    }
    checkchem(sname,marks);
    return 0;
    
}
void checkchem( char sname[SIZE][15], float marks[][3] )
{
    int temp = 0, i, j;
    for(i=0,j=2;i<SIZE;i++)
    {
        if(temp<marks[i][j])
        {
            temp=marks[i][j];
        }
    }
    printf("Toppers in chemistry:\n");
    for(i=0,j=2;i<SIZE;i++)
    {
        if(temp==marks[i][j])
        {
            printf("%s",sname[i]);
        }
    }
    
}