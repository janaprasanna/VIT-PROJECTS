// Insertion sort in C

#include <stdio.h>
#define SIZE 5
// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    
    while (key > array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[SIZE], n = SIZE;
  printf("\n\nEnter %d element to the array: ",n);
  for(int j=0;j< n; j++)
      scanf("%d",&data[j]);
  insertionSort(data, n);
  printf("Sorted array in descending order:\n");
  printArray(data, n);
}