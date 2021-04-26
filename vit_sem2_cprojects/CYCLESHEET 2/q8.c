#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int i,j,len1=0,len2=0,status;
    printf("enter the first string: ");
    fgets(str1,50,stdin);
    printf("enter the second string: ");
    fgets(str2,50,stdin);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
        printf("the given two strings are not  anagram.");

    else    
    {
        for(i=0;i<len1;i++)
        {
            status=0;
            for(j=0;j<len1;j++)
            {
                if(str1[i]==str2[j])
                    status = 1;
            }
        }
    }
    if(status==1)
        printf("\nthe given strings are anagrams.");
    else    
        printf("\nthe given strings are not anagram.");
}