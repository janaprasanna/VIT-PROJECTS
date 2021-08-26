#include<iostream>
using namespace std;

int main()
{
      // SUM= 1+ (1/2)2+ (1/3)3+(1/4)4+ .... +(1/n)n
      int n; float sum=0,term;
      cout<<"enter the value for 'n':";
      cin>>n;

      for(float i=1;i<=n;i++)
      {
            term=1;
            for(int j=1;j<=i;j++)
            {
                  term = term *  (1/i);
            }
            cout<<term<<endl;
            sum = sum +  term;
      }
      cout<<"The sum for the series is:"<<sum;
      return 0;
}