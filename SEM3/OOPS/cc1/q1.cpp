/* Qn: Develop a function that returns through its reference parameters both the maximum and the minimum values stored in an array. */
// Program to find the minimum and maximum value in an array.
#include<iostream> 
using namespace std;
// function declaration or Function Prototype
// void find_minmax(float x[],int n,float *pmn, float *pmx); and max value
void find_minmax(float x[], int n, float &rmin, float &rmax);
int main() 
{
      float list[20]; int size;
      float min, max;
      // To find the min
      cout<<"\n\n Enter the total no. of elements in the list:"<<endl;
      cin>>size;
      cout<<"\n\n Enter the element values in the list :";
      for(int i=0;i<size;i++)
      {
            cin>>list[i];
      }
      min = 0; max = 0;
      find_minmax(list,size,min,max); // function call
      cout<<"\nThe minimum value is:"<<min<<endl; 
      cout<<"\nThe maximum value is:"<<max<<endl;
      return 1;
 }
void find_minmax(float x[], int n, float &rmin, float &rmax) 
{
      float min, max;
      rmin = x[0]; rmax =x[0];
      for(int i=0;i<n;i++) 
      {
            if(x[i] < rmin)
                  rmin = x[i];
      }
      for(int i=0;i<n;i++) 
      {
            if(x[i] > rmax) 
                  rmax = x[i];
      } 
}
