#include<iostream>
using namespace std;
int main()
{
      int i,j,n1=7,n2=9,mul=1,value;
      mul = (mul * 10 ) + 1; // 11
      for(i=1;i<=4;i++)
      {
            
                  value = n1 * n2;
                  cout<<mul<<endl;
                  n1= n1 * mul;        // 7*11
                  n2 = n2 * mul;
                  mul = (mul * 10)+1;
            
            //  11   

            
      }
      return 0;
}