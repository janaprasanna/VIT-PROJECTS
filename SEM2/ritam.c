#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct faculty with 3 fields
struct faculty {
    char* name;
    int id;
    char age;
};

int comparator(const void* p, const void* q)
{
    return strcmp(((struct faculty*)p)->name,
                  ((struct faculty*)q)->name);
}

// Driver program
int main()
{
    int i = 0, n = 3;
    int c=0,count=0;

    struct faculty arr[n];

    // Get the students data
    arr[0].id = 1;
    arr[0].name = "Rohan";
    arr[0].age = 23;

    arr[1].id = 2;
    arr[1].name = "Ritam";
    arr[1].age = 24;

    arr[2].id = 3;
    arr[2].name = "Jana";
    arr[2].age = 28;

    // Print the Unsorted Structure
    printf("Unsorted Faculty Records:\n");
    for (i = 0; i < n; i++) {
        printf("Id = %d, Name = %s, Age = %d \n",
               arr[i].id, arr[i].name, arr[i].age);
    }
    // Sort the structure
    qsort(arr, n, sizeof(struct faculty), comparator);

    // Print the Sorted Structure
    printf("\n\nFaculty Records sorted by Name:\n");
    for (i = 0; i < n; i++)
    {
        printf("Id = %d, Name = %s, Age = %d \n",
               arr[i].id, arr[i].name, arr[i].age);
    }

    }