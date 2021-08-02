#include<stdio.h>
void main()
{
    int low,i,j,result,flag,temp1,temp2,n,x=0,c=0;
    char choice;
    printf("Enter the range till which you want prime numbers\n");
    scanf("%d",&n);
    printf("do you want to enter lower bound?(y/n) : ");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice=='y')
    {
        printf("enter lower bound:");
     
        scanf("%d",&low);
    }
    else
        low=0;
        
    int arr[n-low];
    for(i=low,x=0;i<=n;i++)
    {
        int flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }

       if(flag==2)
        {
           arr[x]=i;
           x++;
           c++;
        }
    }
    for(i=0;i<c;i++)
        printf("%d  ",arr[i]);

    temp1=arr[0];//smaller
    temp2=arr[0];//larger
    
    for(i=0;i<c;i++)
    {
        if(temp1>arr[i])
        {
            temp1=arr[i];
        }
        if(temp2<arr[i])
            temp2=arr[i];
    }
    printf("\ntemp1=%d\ntemp2=%d",temp1,temp2);
    printf("\ndifference between max prime nos: %d",temp2-temp1);

}
