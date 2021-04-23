#include<stdio.h>
void main()
{
    int arr[5],position=0,replace;
    printf("enter 5 values to the array: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array elements are : ");
    for(int i=0;i<5;i++)
        printf("%d  ",arr[i]);
    printf("enter the posion of the value to be deleted : ");
    scanf("%d",&position);
    position = position -1;
    printf("\nenter the replacement value to be inserted at the deleted location : ");
    scanf("%d",&replace);
    arr[position] = replace;
    printf("after inserting.....\n");
    for(int i=0;i<5;i++)
        printf("%d  ",arr[i]);
}