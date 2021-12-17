#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[100];
    int n, e;

    printf("\n\n enter n : ");
    scanf("%d", &n);

    printf("\n\n enter element to search : ");
    scanf("%d", &e);

    printf("\n\n Enter %d elements of array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int resultIndex = linearSearch(arr, n, e);

    if (resultIndex == -1)
    {
        printf("\n\n Element not found! ");
    }
    else
    {
        printf("\n Element found at %d Index", resultIndex);
    }

    return 0;
}