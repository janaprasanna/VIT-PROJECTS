#include <stdio.h>
#define MAX 4
int front = -1, rear = -1; // Creation
char queue[MAX];

void enqueue(char);
int dequeue();
void traverse();
int is_empty();

int main()
{
      char ch = 'j';
    // Enqueue
    enqueue(ch);
    // Enqueue
    ch = 'p';
    enqueue(ch);
    ch='v';
    enqueue(ch);
    ch='i';
    enqueue(ch);
    ch='t';
    enqueue(ch);
    // Display front and rear position
    printf("\n\n Front: %d\tRear: %d", front, rear);
    // Dequeue
    printf("\n\n dequeueing %c", dequeue());
      printf("\n\n Front: %d\tRear: %d", front, rear);
    printf("\n\n dequeueing %c", dequeue());
      printf("\n\n Front: %d\tRear: %d", front, rear);
    printf("\n\n dequeueing %c", dequeue());
      printf("\n\n Front: %d\tRear: %d", front, rear);
    printf("\n\n dequeueing %c", dequeue());
      printf("\n\n Front: %d\tRear: %d", front, rear);
    printf("\n\n dequeueing %c", dequeue());
    // Display Front and Rear position
    printf("\n\n Front: %d\tRear: %d", front, rear);
    // Dequeue
    printf("\n\n dequeueing %c", dequeue());
    // Check is_empty operation and display it!
    int result = is_empty();
    if (result == 1)
    {
        printf("\n\n Queue is Empty ");
        return 0;
    }

    printf("\n\n Queue is not empty");
    return 0;
}

void enqueue(char e)
{
    printf("\n Enqueueing %c", e);
    if (rear == MAX - 1)
    {
        printf("\n Queue is full!!! ");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }

    queue[++rear] = e;
}

int dequeue()
{
    printf("\n dequeueing ");
    if (front == -1 || front > rear)
    {
        printf("\n Queue Underflow! ");
        return 0;
    }
    int temp = queue[front];
    front++;
    return temp;
}

int is_empty()
{
    printf("\n checking if empty... \n");
    if (front > rear)
    {
        return 1;
    }

    return 0;
}
