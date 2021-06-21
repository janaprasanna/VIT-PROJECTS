#include<stdio.h>
#define SIZE 3
struct skl
{
    char sklname[50];
    char sname[50];
    char regno[5];
    float maths,chem,phy;
};
void checkchem(struct skl *s);
void main()
{
    struct skl s[SIZE];
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        printf("enter school name:");
        fflush(stdin);
        gets(s[i].sklname);
        printf("enter student name:");
        fflush(stdin);
        gets(s[i].sname);
        printf("enter reg no : ");
        fflush(stdin);
        scanf("%s",&s[i].regno);
        printf("enter the marks for maths,phy & chem:\n");
        scanf("%f%f%f",&s[i].maths,&s[i].chem,&s[i].phy);
    }
    checkchem(s);
   

}
void checkchem(struct skl s[SIZE])
{
     int temp=s[0].chem,i;
    for(i=0;i<SIZE;i++)
    {
        if(temp<=s[i].chem)
        {
            temp=s[i].chem;
        }
    }
    for(i=0;i<SIZE;i++)
    {
        if(temp==s[i].chem)
            printf("\nName:%s",s[i].sname);
    }
}