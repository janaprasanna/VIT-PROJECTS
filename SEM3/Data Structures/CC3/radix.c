/* Radix Sort 
Base Principle - Counting Sort

*/

#include <stdio.h>
#include <stdlib.h>

int findMax(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void radixSort(int a[], int n)
{
    int bk[10][10], bc[10];
    int i, j, k, r, pass;
    int digits = 0, lar = 0;
    int div = 1;
    lar = findMax(a, n);

    while (lar > 0)
    {
        digits++;
        lar = lar / 10;
    }

    for (pass = 0; pass < digits; pass++)
    {
        // Bucket Reset
        for (i = 0; i < 10; i++)
        {
            bc[i] = 0;
        }

        // Include data from array
        for (i = 0; i < n; i++)
        {
            r = (a[i] / div) % 10;
            bk[r][bc[r]] = a[i];
            bc[r] += 1;
        }

        i = 0;
        for (k = 0; k < 10; k++)
        {
            for (j = 0; j < bc[k]; j++)
            {
                a[i] = bk[k][j];
                i++;
            }
        }
        div *= 10;
        printf("\n After Pass\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int main()
{
    int i, n, a[10];
    printf("Enter the number of items to be sorted: ");
    scanf("%d", &n);
    while (1)
    {
        printf("Enter items: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int m = findMax(a, i);
        int d = 0;

        while (m > 0)
        {
            m = m / 10;
            d++;
        }
        if (d <= 3)
        {
            break;
        }
        printf("\n Input more than 3 digits... re-enter \n");
    }

    radixSort(a, n);
    printf("Sorted items : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
