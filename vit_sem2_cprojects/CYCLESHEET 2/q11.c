#include<stdio.h>
#include<string.h>
void sort(char [5][20]);
int main()
{
  // program to sort an char array in alphabetical order
    char string[5][20];
    printf("enter five names of the students:\n");
    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        fgets(string[i],20,stdin);
    }
    sort(string);
    return 0;
}
void sort(char str[50][20])
{
    int j,i;char checkstring[20];
    for( j=0;j<5;j++)
    {
      for(i=0;i<5;i++)
      {
        if(strcmp(str[i],str[i+1])>0)
        {
          strcpy(checkstring,str[i+1]);
          strcpy(str[i+1],str[i]);
          strcpy(str[i],checkstring);

        }
      }
    
    }
    printf("\nafter sorting the array: \n");
    for(i=0;i<5;i++)
    {
        printf("  %s",str[i]);
    }
}
