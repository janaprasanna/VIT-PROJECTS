#include<stdio.h>
void main()
{
    int low,high,i,j,result,x,flag,temp1,temp2;
    char choice;
    printf("enter range:");
    scanf("%d",&high);
    printf("\ndo you want to enter lower bound?(y/n) ");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice=='y')
        {
            printf("enter lower bound:");
            scanf("%d",&low);
        }
    else
        low=0;
    int arr[high];
     for(i=low,x=0; i<=high; i++,x++)
   {
      flag=0;
      for(j=2; j<=i/2; j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         arr[x]=i;
      else
        arr[x]=0;
   }
   for(i=0;i<x;i++)
        printf("%d  ",arr[i]);
    temp2=arr[0];temp1=arr[0];
    for(i=0;i<=x;i++)
    {
        for(j=1;j<=x-1;j++)
        {
            if(temp1<arr[j])
                temp1=arr[i];
            if(temp2>arr[j]&&arr[j]!=0)
                temp2=arr[j];

        }
    }
    printf("\ntemp1=%d\ntemp2=%d",temp1,temp2);
    printf("\ndifference between maximum prime nos: %d",temp1-temp2);
}