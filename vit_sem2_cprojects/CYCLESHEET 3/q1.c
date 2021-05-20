#include<stdio.h>
#include<string.h>
void copystring ( char*,char*);
int main()
{
    char str1[50]="hello guys",str2[50];
    int i,j;
    copystring(str1,str2);
    printf("original string : %s",str1);
    printf("\ncopied string : %s",str2);

    return 0;
}
void copystring(char s1[],char s2[])
{
    int len = strlen(s1); 
    for(int i=0;i<len;i++)
        s2[i]=s1[i];
}