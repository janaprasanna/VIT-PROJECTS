#include <stdio.h>
#include<string.h>
void main()
{
  char choice;
  int n,i,j,temp;
  printf("enter the size of list : ");
  scanf("%d",&n);
  int list[n];
  printf("enter the elements for the list: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&list[i]);
  }
  printf("enter the type of order(A/D) that the list needs to be shown: ");
  fflush(stdin);
  scanf("%c",&choice);
  switch(choice)
  {
    case 'A':
    case 'a':
          printf("printing in ascending order : \n");
          for(i=0;i<n;i++)
          {
            for(j=i+1;j<n;j++)
            {
              if(list[i]>list[j])
              {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
              }
            }
          }
          for(i=0;i<n;i++)
            printf("%d  ",list[i]);
            break;
    case 'D':
    case 'd':
          printf("printing in ascending order : \n");
          for(i=0;i<n;i++)
          {
            for(j=i+1;j<n;j++)
            {
              if(list[i]<list[j])
              {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
              }
            }
          }
          for(i=0;i<n;i++)
            printf("%d  ",list[i]);
            break;
   default:
        printf("invalid type !");
        break;
  }

}
