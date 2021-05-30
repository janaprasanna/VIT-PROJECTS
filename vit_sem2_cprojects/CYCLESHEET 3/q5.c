#include<stdio.h>
#include<string.h>
void strrep(char*,char *,char *,int ,int );
void main()
{
    char str[100],word[10],replace[10];int i,e_space=0,s_space=0;//e_space = ending space; s_space=starting space
 
    printf("enter a string:");
    gets(str);
    printf("enter the word that needs to be removed from the string:");
    gets(word);
    printf("enter the word that should be replaced within that position:");
    gets(replace);
    
 
    for(i=0;i<=strlen(str);i++)  // 0 -  9
    {
        if(str[i]==' ')   //i=5 has " "
        {
            e_space=i-1;  
             
            strrep(str,word,replace,s_space,e_space); // 0 - 5
            s_space=e_space+2;
           // printf("\ns_space=%d",s_space);
        }
        else if(str[i]=='\0')
        {
            e_space=strlen(str)-1;
            
           
            strrep(str,word,replace,s_space,e_space);
         
        }
    }
    printf("\nafter replacing:%s",str);
}
void strrep(char str[],char word[],char replace[],int s_space,int e_space)
{
    
  
    char dummytext[10];int j=0,i=0;char temp[100];
    strcpy(temp,str);
    int len1=strlen(word),len2=strlen(replace);
    //printf("\ntemp=%s",temp);
    for(i=s_space,j=0 ;i<=e_space;i++,j++)
    { 
            dummytext[j]= str[i];
    }
    dummytext[j]='\0';
    //printf("\ndummytext=%s",dummytext);  //checking if the words are properly copied.
    if(strcmp(dummytext,word)==0)
    { 
            for(j=0,i=s_space;j<strlen(replace);j++,i++)
            {
                str[i]= replace[j];     //0 1 2 
            }
            //printf("\ni=%d",i);
            /*for(;temp[i];)
            {
                str[i++]=temp[i++];
            }
            str[i]='\0';*/
            if(len1>len2)       //len1=word;len2=replace
            {
                str[i]=' ';
                j=e_space+1;
                for(;i<strlen(temp);)
                {
                    str[i++]=temp[j++];
                }
            }
            else
            {
               str[i]=' ';  //since i occupies an extra character in place of space
                j=e_space+1;
                for(;temp[j];)
                {
                    str[++i]=temp[++j];
                }
            }
    }
    
    //printf("\n\nmodifed:%s",str);  //checking
}