#include<stdio.h>
void mergesort(int*,int,int);
void merge(int* , int ,int,int);
void main()
{
  int a[5]={8,1,3,2,6},i;
  mergesort(a,0,4);
  for(i=0;i<4;i++)
  {
    printf("%d  ",a[i]);
  }

}
void mergesort(int a[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid = (low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
  }
}
void merge(int a[],int low,int mid,int high)
{
  int i,j,k,temp[5];
  i=low;
  j=mid+1;
  k=0;
  while(i<=mid && j<=high)
  {
    if(a[i]<a[j])
    {
      temp[k]= a[i];
      i++;
      k++;
    }
    else
    {
      temp[k]= a[j];
      k++;
      j++;
    }
  }
  if(i>mid) // when i is greater than mid, but some elements in list 2 is remaining
  {
    while(j<=high) // then DO:
    {
      temp[k]= a[j]; // copying all the elements of second list into a[]
      j++;
      k++;
    }
  }
  else
  {
    while(i<=mid)
    {
      temp[k]=a[i]; // copying all left over element in first list into a[]
      i++;
      k++;
    }
  }
  for(i=low,j=0;i<=high;i++,j++)
  {
    a[i]= temp[j];
  }
}
