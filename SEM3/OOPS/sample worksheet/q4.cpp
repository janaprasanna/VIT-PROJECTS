#include<iostream>
using namespace std;
int main()
{
      int n;float sum=0;
      cout<<"enter value for 'n':";
      cin>>n;
      for(float i=1;i<=n;i++)
      {
            sum = sum + (1/i); 
      }
      cout<<"Sum of the series:"<<sum;
}