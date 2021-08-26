//program to find the minimum and maximum value in an array using function
#include<iostream>
using namespace std;
int findmax(float *, int);
int findmin(float *, int);
int main()
{
      // finding min and max value stored in an array.
      int n;
      cout<<"\n\nenter the number of elements to be inserted to the array:\n";
      cin>>n;
      float list[n];
      cout<<"\n\nEnter "<<n<<"to the array:\n";
      for(int i=0;i<n;i++)
      {
            cin>>list[i];
      }
      cout<<"maximum value in the array:"<<findmax(list,n)<<endl;
      cout<<"minimum value in the arra:"<<findmin(list,n)<<endl;
      findmin(list,n);
      return 0;
}
int findmin(float list[],int n)
{
      int i,j; //looping variable
      float min=list[0];
      for(i=0;i<n;i++)
      {
            for(j=1;j<n-1;j++)
                  if(list[i]>list[j])
                        min = list[j];
      }
      return min;

}
int findmax(float list[],int n)
{
      int i,j; //looping variable
      float max=list[0];
      for(i=0;i<n;i++)
      {
            for(j=1;j<n-1;j++)
                  if(list[i]<list[j])
                        max = list[j];
      }
      return max;

}