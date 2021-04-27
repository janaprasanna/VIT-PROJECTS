#include<stdio.h>
int main()
{
    char s[1000];
    int i,j;
    printf("Enter any string:");
    gets(s);
    printf("Before trimming :%s",s);
    
    for(i=0;s[i]==' '||s[i]=='\t';i++); // counts the space in leading postion (not in trailing)
        printf("\n%d",i);

    for(j=0;s[i];i++)
    {
        s[j++] = s[i];
    }
    s[j]='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]!=' '&&s[i]!='\t')
            printf("\n%d",j);
            j=1;  // i is copied to j so that j+1 reaches the end of string with no spaces.
    }
    s[j+1]='\0'; //terminating the index before the trailing space
    printf("\nAfter trimming :%s",s);
    return 0;
}