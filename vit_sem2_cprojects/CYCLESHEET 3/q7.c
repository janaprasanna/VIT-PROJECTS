#include<stdio.h>
#include<string.h>
struct school
    {
        char schoolname[50];
        char address[50];
        char type[15];
        char board[10];
        int contact;
    };
void main()
{
    int i,j,flag=0;char search[15];
    struct school s[3];
    for(i=0;i<2;i++)
    {
        printf("Enter school %d Details:\n",i+1);
        printf("school name:");
        fflush(stdin);
        gets(s[i].schoolname);
        fflush(stdin);
        printf("address:");
        gets(s[i].address);
        fflush(stdin);
        printf("enter board(central/state/ICSE):");
        gets(s[i].board);
        fflush(stdin);
        printf("medium:");
        gets(s[i].type);
        printf("contact details:");
        scanf("%d",&s[i].contact);
    }
    printf("\nenter the school name to be searched:");
    fflush(stdin);
    gets(search);
    for(i=0;i<2;i++)
    {
        if(stricmp(s[i].schoolname,search)==0)
        {
            flag=1;
            j=i;
            printf("\nschool details:\n");
            for(j=i;j==i;j++)
            {
                printf("\n---------------------------------------\n");
                printf("\nschool name:%s",s[j].schoolname);
                printf("\naddress:%s",s[j].address);
                printf("\nMedium:%s",s[j].type);
                printf("\ncontact details:%d",s[j].contact);
                break;
            }
        }    
    }
    if(flag==0)
        printf("No such school found in the database!");
    
}