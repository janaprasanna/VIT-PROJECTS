#include<stdio.h>
#include<string.h>

int main()
{
    int num1 = 0 , num2 = 1,range,temp,rem,sum=0,count=2,size=1;
    printf("enter the range:");
    scanf("%d",&range);
    for(int i=0,j=1;i<=range-1;i++,j++)
    {
        if (i==0)
        { 
            printf("%d ",num1);
            for(int z=1;z<temp;z++)
            { 
                rem = temp%i;
                sum = sum + j;
            }
            if(temp == sum)
                printf("perfect number");
            else    
                continue;
            printf("\n");
        }
        else if (i==1)
        { 
            printf(" %d ",num2);
            for(int z=1;z<temp;z++)
            { 
                rem = temp%i;
                sum = sum + j;
            }
            if(temp == sum)
                printf("perfect number");
            else    
                continue;
            printf("\n");
        }
        else
        { 
            temp = num1 + num2;
            printf(" %d ",temp);
            num1=num2;
            num2 = temp;
            for(int z=1;z<temp;z++)
            { 
                rem = temp%i;
                sum = sum + j;
            }
            if(temp == sum)
                printf("perfect number");
            printf("\n");
        }
        
    }
    
}



