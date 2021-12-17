#include <stdio.h>
// Heap Sort - Done by 20BCA0047
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (n > left && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (n > right && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest); // after swapping heapify with largest element as root!
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    } // heapify

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[i], &arr[0]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[50];
    int n;

    printf("\n Enter number of elements : ");
    scanf("%d", &n);

    printf("\n Enter elements of the array ... \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    printArray(arr, n);
}