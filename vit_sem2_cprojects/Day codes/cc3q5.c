#include<stdio.h>
#include<string.h>
void strreplace(char*,char *,char *);
void main()
{
    char str[100],word[10],replace[10];

    printf("enter a string:");
    gets(str);
    printf("enter the word that needs to be removed from the string:");
    gets(word);
    printf("enter the word that should be replaced within that position:");
    gets(replace);
    strreplace(str,word,replace);
    printf("\nafter replacing:%s",str);
}
void strreplace(char str[],char word[],char replace[])
{
    int lenstr,lenword,lenreplace,i=0,j,k,start,end;char temp[50];
    lenstr=strlen(str);
    lenword=strlen(word);
    lenreplace=strlen(replace);
    strcpy(temp,str);
    for(i=0;i<lenstr;i++)
    {
        for(j=0;str[i]==word[j];j++)   //hhello            hello
        {
            if(str[i]==word[j])
                start=i;
            else    
            {
                start=start-lenword-1;
                printf("start=%d",start);
                break;
            }   
            printf("\nstart=%d",start);
        }
        for(j=0;j<lenstr;j++)
        {
            if(str[j]==' ')
            {
                end=j;
                break;
            }
            if(str[j]=='\0')
            {
                end=j;
                break;
            }
            printf("\nend=%d",end);
        }
    }
    
    //printf("\nstart=%d\nend=%d\n",start,end);
    for(j=0,k=start;j<lenreplace;j++,k++)
    {
        str[k]=replace[j];
    }

    if(str[k]!=' ')
    {
        str[k]=' ';
        for(;temp[end];)
        {
            str[++k]=temp[++end];
        }
    }
    else
    {
        for(k;temp[end];)
        {
            str[++k]=temp[end++];
        }
    }
    
}