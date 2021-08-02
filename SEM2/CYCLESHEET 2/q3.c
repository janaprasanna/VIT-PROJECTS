#include<stdio.h>
#include<string.h>
int  main()
{
	char string[50],string2[10]={'0','1','2','3','4','5','6','7','8','9'};int i,j;
	printf("enter a string : ");
	gets(string);
	printf("reverse and lowercase is : %s\n",strlwr(strrev(string)));
	printf("reverse and uppercase of the string is : %s",strupr(strrev(strrev(string))));
	for(i=0;i<strlen(string);i++)
	{
		for(j=0;j<=strlen(string);j++)
		{
			
			if(string[i]>=65  && string[i]<123)
			{
				string[i]='*';
			}
			else if(string[i]>=33 && string[i]<48)
				string[i]='*';
			
			else if(string[i]>=58 && string[i]<65)
				string[i]='*';
			else if(string[i]>=91 && string[i]<97)
				string[i]='*';
			else if(string[i]==string2[j])
			{
				string[i]='0';
			}
			else
				continue;
			
		}
	}
	
	printf("\nmodified string : %s",strlwr(strrev(string)));
	return 0;
	
}
