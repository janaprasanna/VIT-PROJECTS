// Bubble sort in C
#include <stdio.h>

void bubbleSort(float array[], int size) ;
void printArray(float array[], int size);

void bubbleSort(float array[], int size) 
{

  for (int a = 0; a < size - 1; a++) {
      
    // loop to compare array elements
    for (int i = 0; i < size - a - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void printArray(float array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("\n%f  ", array[i]);
  }
  printf("\n");
}

int main() {
      // done by 20BCA0047
      // negative unsorted float array
  float data[10] = {-2.0, -45.33, -3.5, -11.11, -9.7, -5.6, -7.7, -100.0, -6.8, -44.4};
  
  // finding  the array's length
  float size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted float Array in Ascending Order:\n");
  printArray(data, size);
}