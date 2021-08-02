#include<stdio.h>
#define SIZE 3
struct skl
{
    //char sklname[50];
    char sname[50];
    char regno[5];
    float maths,chem,phy;
};
void checkchem(struct skl *s);
void checkphy(struct skl *s);
void main()
{
    struct skl s[SIZE];
    int i,j;
    for(i=0;i<SIZE;i++)
    {
       /* printf("enter school name:");
        fflush(stdin);
        gets(s[i].sklname);*/
        printf("enter student name:");
        fflush(stdin);
        gets(s[i].sname);
        printf("enter reg no : ");
        fflush(stdin);
        scanf("%s",&s[i].regno);
        printf("enter the marks for maths,phy & chem:\n");
        scanf("%f%f%f",&s[i].maths,&s[i].chem,&s[i].phy);
    }
    //checkchem(s);
    checkphy(s);
   

}
void checkchem(struct skl s[SIZE])
{
     float temp=0;int i,temp2=0,temp3=0;
    for(i=0;i<SIZE;i++)
    {
        if(temp<=s[i].chem)
        {
            temp=s[i].chem;
        }
    }
    printf("\n1st toppers in chemistry:\n");
    for(i=0;i<SIZE;i++)
    {
        if(temp==s[i].chem)
            printf("\nName:%s",s[i].sname);
    }
   
}
void checkphy(struct skl s[SIZE])
{
    int i,temp=0,temp2=0;
     for(i=0;i<SIZE;i++)
    {
        if(temp<s[i].phy)
        {
            temp2=temp;
            temp=s[i].phy;
        }
    }
    printf("\n2nd topper in physics:\n");
    for(i=0;i<SIZE;i++)
    {
        if(temp2==s[i].phy)
            printf("\nName:%s",s[i].sname);
    }
}
