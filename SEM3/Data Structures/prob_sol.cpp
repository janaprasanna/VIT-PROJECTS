#include<iostream>
#include <unordered_map>
using namespace std;
/*
 void printAllSubarrays(int *, int);
// Function to print all subarrays with a zero-sum
// in a given array
void printAllSubarrays(int arr[], int n)
{
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements so far
            sum += arr[j];
 
            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0) 
            {
                cout<<"\n[";
                for(int temp=i; temp<j;temp++)
                    cout<<" "<<arr[temp];
                cout<<"]\n";
                //cout << "Subarray [" << arr[i] << "…" << arr[j] << "]\n";
            }
        }
    }
}*/
 void subarrays(int *, int);
 void subarrays(int arr[], int size)
 {
     
     for(int i=0;i<size;i++)
     {
         int sum = 0;
         for(int j=i+1;j<size;j++)
         {
             if(sum<=10)
                sum = sum + arr[i] + arr[j];
             if(sum == 10)
             {
                 
                 cout<<"[";
                
                 cout<<" "<<arr[i]<<" "<<arr[j];
                 
                 cout<<"]\n";
             }
             sum = 0;
         }

     }
 }
int main()
{
    //int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int arr[] = { 8, 7, 2, 5, 3, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    subarrays(arr, n);
    //printAllSubarrays(arr, n);
 
    return 0;
}