#include<stdio.h>
void main()
{
    int i,j;
    struct school
    {
        char schoolname[50];
        char address[50];
        char type[15];
        char board[10];
        int contact;
    }s[3];
    for(i=0;i<3;i++)
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
    printf("\nschool details:\n");
    for(i=0;i<3;i++)
    {
        printf("\n---------------------------------------\n");
        printf("\nschool %d:",i+1);
        printf("\n---------------------------------------\n");
        printf("\nschool name:%s",s[i].schoolname);
        printf("\naddress:%s",s[i].address);
        printf("\nMedium:%s",s[i].type);
        printf("\ncontact details:%d",s[i].contact);
    }
}