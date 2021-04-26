#include<stdio.h>
void main()
{
	int i,j,n,temp=0,high=0,student ;
	printf("entr the number of students: ");
	scanf("%d",&n);
	int marks[n][3],total[n],rollnumber[n];          //marks[student][subject]
	for(i=0;i<n;i++)
	{
		printf("enter roll number: ");
		scanf("%d",&rollnumber[i]);
		printf("  enter marks: \n ");
		for(j=0;j<3;j++)
		{	
			printf("\tsubject[%d]: ",j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	printf("Rollnumber\tsubject1\tsubject2\tsubject3\t\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t",rollnumber[i]);
		for(j=0;j<3;j++)
			{
				printf("%d\t\t",marks[i][j]);
				temp += marks[i][j];
			}
			total[i] = temp;
			
		printf("\n");
	}
	printf("Total marks scored by each student: \n");
	for(i=0;i<n;i++)
		printf("student[%d] = %d\n",i+1,total[i]);

	printf("Highest marks in each subject: \n");
	for(j=0;j<3;j++)
	{
		high = 0,student=0;
		for(i=0;i<n;i++)
		{ 
			if(high<=marks[i][j])
			{
				high = marks[i][j];
				student = i;
			}
		}
		printf("student = %d,",student+1);
		printf("subject[%d] = %d\n",j+1,high);
	}
	for(i=0;i<n;i++)
	{
			high = total[i];
			if(total[i]>=high)
				high = i;

	}
	printf("\nThe student who obtained the highest total marks : %d",high+1);
}