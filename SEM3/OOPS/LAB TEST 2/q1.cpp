#include <iostream>
using namespace std;

template <class T>
class largest {
private:
	T *ptr;
	int size;
public:
	largest(T arr[], int s);
	void display();
      T largestelement();
};

template <class T>
largest<T>::largest(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for(int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <class T>
void largest<T>::display() {
      cout<<"\nList elements: \n";
	for (int i = 0; i < size; i++)
      {
            cout<<" "<<*(ptr + i)<<endl;
      }
}

template<class T>
T largest<T> :: largestelement()
{
     int i,j;
     T max = ptr[0];
      for (i = 1; i < size; i++)
        if (ptr[i] > max)
            max = ptr[i];

      return max;

}     



 


int main() {

	int list1[5] = {5, 23, 1, 0, 4};
      float list2[5] = {4.33, 5.5, 7.7, 55.77, 3.14 };
      char list3[5] = {'A', 'c', 'X', 'd', 'Q'};
	largest<int> O1(list1, 5);
      largest<float> O2(list2, 5);
      largest<char> O3(list3, 5);
      
      O1.display();
      cout<<"\n\nLargest element: "<<O1.largestelement();

       O2.display();
      cout<<"\n\nLargest element: "<<O2.largestelement();

       O3.display();
      cout<<"\n\nLargest element: "<<O3.largestelement();
	return 0;
}

