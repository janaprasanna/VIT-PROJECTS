#include<stdio.h>
#include<string.h>
char strrep(char*,char *,char *,int ,int );
void main()
{
    char str[100],word[10],replace[10];int i,e_space=0,s_space=0;//e_space = ending space; s_space=starting space
    int temp=0;
    printf("enter a string:");
    gets(str);
    printf("enter the word that needs to be removed from the string:");
    gets(word);
    printf("enter the word that should be replaced within that position:");
    gets(replace);
    printf("\nafter replacing:%s",str);

    for(i=0;i<strlen(str);i++)  // 0 -  9
    {
        if(str[i]==' ')   //i=5 has " "
        {
            e_space=i;  
            temp=e_space; 
            strrep(str,word,replace,s_space,e_space); // 0 - 5
            s_space=e_space+1;
            printf("\ns_space=%d",s_space);
        }
        else if(str[i]=='\0')
        {
            e_space=strlen(str);
            strrep(str,word,replace,s_space,e_space);
         
        }
    }
}
char strrep(char str[],char word[],char replace[],int s_space,int e_space)
{
    char dummytext[10];int j=0,i;
    for(i=s_space,j=0 ;i<e_space;i++,j++)
    {
            dummytext[j]= str[i];
    }
    printf("\ne_space=%d",e_space);
    printf("\ndummytext= %s",dummytext);  //checking if the words are properly copied.
    /*if(strcmp(dummytext,word)==0)
    { 
    
            for(j=0,i=s_space;i<e_space;j++,i++)
            {
                str[i]= replace[j];
            }
            
    }*/
    //printf("\n\nmodifed:%s",str);  //checking

}