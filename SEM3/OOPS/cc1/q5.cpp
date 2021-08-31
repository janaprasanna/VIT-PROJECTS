#include<iostream>
using namespace std;

template<typename D>
int search(D list[], int n, D element)
{
      for(int i=0;i<n;i++)
      {
            if(list[i]== element)
            {
                  return (i+1);
            }
      }
      return 0;
}
int main()
{
      int ielement, ilist[100], n, result = 0;
      float flist[100], felement;
      cout<<"Enter number of elements:";
      cin>>n;
      cout<<"\nEnter "<<n<<" elements of int type into the list:\n";
      for(int i=0;i<n;i++)
      {
            cin>>ilist[i];
      }
      cout<<"\nEnter a element to be searched in the list:";
      cin>>ielement;
      result = search(ilist, n, ielement);
      if(result>0)
            cout<<"\nElement found!. Position:"<<result;
      else  
            cout<<"\nElement not found.";
      cout<<"\nEnter "<<n<<" elements of float type into the list:";
      for(int i=0;i<n;i++)
            cin>>flist[i];
      
      cout<<"\nEnter a elements to be searched in the list:";
      cin>>felement;
      result = search(flist, n, felement);
      if(result>0)
            cout<<"\nElement found!. Position:"<<result;
      else  
            cout<<"\nElement not found.";
      return 0;
}