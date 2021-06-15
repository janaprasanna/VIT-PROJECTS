#include<stdio.h>
#include<string.h>
#define SIZE 2
struct players
{
    char pname[15];
    int age;
    int pid;
    char gender;
    char team[15];
};
void main()
{
   struct players p[SIZE];
   int i,j;
   for(i=0;i<SIZE;i++)
   {
       printf("\nenter player %d name:",i+1);
       fflush(stdin);
       gets(p[i].pname);
       printf("enter player age:");
       scanf("%d",&p[i].age);
       printf("enter player ID:");
       scanf("%d",&p[i].pid);
      
       printf("enter the player gender:");
       fflush(stdin);
       p[i].gender=getchar();
       printf("enter team name:");
       fflush(stdin);
       gets(p[i].team);

   }
   printf("player details:\n");
   printf("\n----------------------------------------------");
   for(i=0;i<SIZE;i++)
   {
       printf("\nplayer %d",i+1);
       printf("\nName:%s",p[i].pname);
       printf("\nAge:%d",p[i].age);
       printf("\nPlayer id:%d",p[i].pid);
       printf("\nGender:%c",p[i].gender);
       printf("\nTeam name:%s",p[i].team);
       printf("\n----------------------------------------------");
   }
}
