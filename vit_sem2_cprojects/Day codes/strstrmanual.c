# include<stdio.h>
# include<string.h>
int main()
{
    int i=0,j=0;

    int len = 0;

 char string[50],substring[20],replace[20];
 char temp[50];



 printf("Enter the first string = ");

 gets(string);
 printf("Enter the sub string = ");
 gets(substring);



for(i  =  0; string[i] != '\0' ; i++)
{
     if(substring[j] == '\0')
    {
        i = i - 5;
        break;


    }
    if(string[i] != substring[j])
    {
        j=0;
    }
    if(string[i] == substring[j])
    {
        j++;

    }


}
j = 0;
int x = i;
for(i = 0; string[x] != '\0';i++)
{
    temp[i] = string[x] ;
    x++;
}
puts(temp);






}