#include<stdio.h>
#include<stdlib.h>
void insertionsort(int *, int);
void main()
{
      int N;
      printf("enter the number of elements: ");
      scanf("%d", &N);
      int *list = (int*)malloc(N * sizeof(int));
      printf("enter %d elements to the list:\n", N);
      for(int i=0;i<N;i++)
      {
            scanf("%d", &list[i]);
      }
      insertionsort(list, N);
      printf("\nsorted list: ");
      for(int i=0;i<N;i++)
      {
            printf("%d ",list[i]);
      }
}
void insertionsort(int *list, int N)
{
      int key;
      for(int i=1;i<N;i++)
      {
            key = list[i];
            int j = i - 1;
                  while(key < list[j] && j>=0)
                  {
                        list[j+1] = list[j];
                        j--;
                  }
                  list[j + 1] = key;
            
      }
}