#include <stdio.h>

// int binarySearch(int arr[], int l, int h, int e)
// {
//     int mid = 0;

//     if (h >= l)
//     {
//         mid = (l + h) / 2;

//         if (arr[mid] == e)
//             return mid;

//         if (e > arr[mid])
//         {

//             return binarySearch(arr, mid+1, h, e);
//         }

//         return binarySearch(arr, l, mid-1, e);
//     }
// }

int binarySearch(int arr[], int l, int h, int e)
{
    int mid = 0;

    while (h >= l)
    {

        mid = (l + h) / 2;
        if (e == arr[mid])
            return mid;
        else if (arr[mid] < e)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int ele = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // already sorted array
    int n = sizeof(arr) / sizeof(arr[0]) - 1;

    printf("\n Enter element to search : ");
    scanf("%d", &ele);

    int resultIndex = binarySearch(arr, 0, n, ele);

    (resultIndex == -1) ? printf("\n Element Not found")
                        : printf("\n Element found at index %d", resultIndex);
}