#include<stdio.h>
#include<string.h>
void copystring ( char*,char*);
int userstrcmp(char*,char*);
void userconcat(char*,char*);
void userupr(char*);
void userlwr(char*);
int main()
{
    char str1[50]="HELLO GUYS",str2[50]="welcome to c programming",str3[50]="hello guys";
    int i,j,result;
    userlwr(str1);
    printf("in upper: %s",str1);
    copystring(str1,str2);
    result=userstrcmp(str1,str2);
    userconcat(str1,str2);
    printf("\nafter joined : %s",str1);
    printf("\noriginal string : %s",str1);
    printf("\ncopied string : %s",str2);
    printf("\nstring compare results : %d",result);
    return 0;
}
void copystring(char s1[],char s2[])
{
    int len = strlen(s1); 
    for(int i=0;i<len;i++)
        s2[i]=s1[i];
}
int userstrcmp(char s1[],char s2[])
{
    int len1=strlen(s1),len2=strlen(s2),i,j;
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i]==s2[i])
                return 0;
            else if(s1[i]>s2[i])
            {
                return 1;
                break;
            }
            else
            {
                return -1;
                break;
            }
                
        }
    }
    else
    {
        for(i=0;i<len1||i<len2;i++)
        {
            if(s1[i]>s2[i])
            {
                return 1;
                break;
            }
            else
            {
                return -1;
                break;
            }
        }
    }
}
void userconcat(char s1[],char s2[])
{
    int len1=strlen(s1),len2=strlen(s2),i,j;
    //s1[len1]=' ';
    for(i=len1,j=0;j<len2;j++,i++)
    {
        s1[i]=s2[j];
    }
}
void userupr(char s1[])
{
    for (int i=0;i<strlen(s1);i++)
    {
        if(s1[i]>'a'&&s1[i]<'z')
            s1[i]=s1[i]-32;
    }
}void userlwr(char s1[])
{
    for (int i=0;i<strlen(s1);i++)
    {
        if(s1[i]>'A'&&s1[i]<'Z')
            s1[i]=s1[i]+32;
    }
}
