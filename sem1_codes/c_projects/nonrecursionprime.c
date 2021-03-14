#include<stdio.h>
int func(int n)
{
    int i,j,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           {
               c=0;
           for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {c=c+1;}
            }
            if(c==2)
                printf("%d ",i);

           }
    }
}
int main(void)
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    func(n);

}
