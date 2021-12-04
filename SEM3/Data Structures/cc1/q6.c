#include<stdio.h>
#define SIZE 4
#include<string.h>

struct BankJob
{
char jobname[50];
char job_num[25];
};
struct BankJob J_queue[SIZE];
int front=-1,rear=-1;
void enqueue();
int dequeue();
void traverse();
int main()
{
int chr;
while(1)
{
    printf("\nPick the operation to do:\n1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit\n");
printf("\n Enter your choice:");
scanf("%d", &chr);
switch(chr)
{
      case 1:
            enqueue();
            break;
      case 2:
            dequeue();
            break;
      case 3:
            traverse();
            break;
      case 4:
            exit(-1);
            break;

      default:
            printf ("\n\tEnter the Choice(1/2/3/4)");

}
}
return 0;
}
void enqueue()
{
char ch;
if(rear==SIZE-1)
{
printf("\nJob Overload!");
printf("\n********************\n");
return;
}
if (front==1)
{
front=0;
}
rear++;
printf("\n Enter Job Name: ");
fflush(stdin);
gets(J_queue[rear].jobname);
printf("\n Enter Job number: ");
fflush(stdin);
gets(J_queue[rear].job_num);
}
int dequeue()
{
int temp=front;
if(front>rear)
{
printf("\n There is no job left!");
printf("\n*****************\n");
return;
}
front++;
return temp;
}
void traverse()
{
if(front>rear)
{
printf("\nThere is no job left for traversal");
printf("\n*******************\n");
return;
}
int b=1;
int a;
for(a=front;a<=rear;a++)
{
      printf("\n*****************\n");
      printf("\tJob %d\n", b++);
      printf("Job Name: ");
      printf("%s\n", J_queue[a].jobname);
      printf("Job Number: ");
      printf("%s\n", J_queue[a].job_num);
}
      printf("*******************\n");
}
