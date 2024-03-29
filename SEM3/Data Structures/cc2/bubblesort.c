#include<stdio.h>
#include<string.h>
#define MAX 100
void sortStrings(char [][MAX], int );

void sortStrings(char arr[][MAX], int n)
{
    char temp[MAX];
  
    // Sorting strings using bubble sort
    for (int j=0; j<n-1; j++)
    {
        for (int i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) < 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}
  
int main()
{
      
    int n, max;
   
    printf("\nHow many strings you want to enter:");
    scanf("%d", &max);
     char arr[max][MAX];
     printf("\nenter %d strings:\n", max);
     for(int i=0;i<max;i++)
     {
           fflush(stdin);
           gets(arr[i]);
     }
     n = sizeof(arr)/sizeof(arr[0]);
  
    sortStrings(arr, n);
  
    printf("Strings in sorted order are : ");
    for (int i=0; i<n; i++)
        printf("\n String %d is %s", i+1, arr[i]);
    return 0;
}