#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000],temp=1,c='*';
    int i,j,k=0,n;
    printf("enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(!(s[i]==c))
        {
            for(j=i+1;s[j]!='\0';j++)
            {
                if(s[i]==s[j])
                    s[j]=c;
            }
        }
    }
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=s[i+k];
        if(s[i]==c)
        {
            k++;
            i--;
        }
    }
    printf("string after removing all duplicates: %s",s);
}