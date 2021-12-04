#include<iostream>
using namespace std;

template<class T>
class sorting
{
      T *arr;
      int size;
      public:
            sorting()
            {
                  cout<<"\nEnter size for elements: ";
                  cin>>size;
                  arr = new T(size);
                  cout<<"\nEnter "<<size<<" elements into the array:\n";
                  for(int i=0; i<size; i++)
                  {
                        cin>>arr[i];
                  }
            }
            void bubblesort();
            void selectionsort();
            void display();


};

template<class T>
void sorting<T> :: bubblesort()
{
      
      T temp;
      for(int i=0;i<size-1;i++)
      {
            for(int j=i+1;j<size ;j++)
            {
                  if(arr[j]<arr[i])
                  {
                        temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                  }
            }
            
      }
      
}
template<class T>
void sorting<T> :: selectionsort()
{
      T temp;
      int position ;
      for(int i=0; i < size - 1; i++)
      {
            position = i;
            for(int j=i+1; j< size; j++)
            {
                  if(arr[position]<arr[j])
                  {
                        position = j;
                  }
                  temp = arr[position];
                  arr[position] = arr[j];
                  arr[j] = temp;
            }
      }
}

template<class T>
void sorting<T> :: display()
{
      cout<<"\nSorted array:\n";
      for(int i=0; i< size; i++)
      {
            cout<<arr[i]<<endl;
      }
}



int main()
{

      sorting<float> s1;
      sorting<int> s2;
      cout<<"\nsorting using bubble sort:\n";
      s1.bubblesort();
      s1.display();
      cout<<"\nsorting using selection sort:\n";
      s1.selectionsort();
      s1.display();
      return 0;
}