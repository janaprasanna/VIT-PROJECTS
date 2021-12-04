#include <stdio.h> 
int main()
{
      float arr[50];
      int n, i, j, position, t; 
      printf("\nEnter the number of float numbers to sort:"); 
      scanf("%d", &n);
      printf("Enter %d float numbers:\n", n);
      for (i = 0; i < n; i++) 
            scanf("%f", &arr[i]);
      for (i = 0; i < (n - 1); i++) 
      {
            position = i;
            for (j = i + 1; j < n; j++) 
            {
                  if (arr[position] > arr[j]) 
                        position = j;
            }
                  if (position != i) 
                  {
                        t = arr[i];
                        arr[i] = arr[position]; arr[position] = t;
                  } 
      }
      printf("Sorted float number in ascending order are:\n");
      for (i = 0; i < n; i++) 
            printf("%f\n", arr[i]);
      return 0; 
}