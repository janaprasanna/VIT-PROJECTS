#include<stdio.h>
int main()
{
	int marks[3][3],i,j,sum,high,topper[3],n;
	printf("enter the number of students: ");
	scanf("%d",&n);
	int rollnumber[n];
	printf("Enter the marks scored by %d students in 3 subjects: \n",n);
	for(i=0;i<n;i++)     //students
	{
		printf("enter roll number: ");
		scanf("%d",&rollnumber[i]);
		for(j=0;j<3;j++)   //subjects
		{
			printf("student[%d] subject[%d]: ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	printf("Roll number|Subject1|Subject2|Subject3|\n");
	//printf("\nTotal marks scored by each student: \n");
  for(i=0;i<n;i++)
	{
		printf("%d         |",rollnumber[i]);
		for(j=0;j<3;j++)
		{
			printf("%d\t    |",marks[i][j]);
		}
		printf("\n");
	}
	printf("\nTotal marks scored by each student: \n");
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum = sum + marks[i][j];

		}
		topper[i] = sum;
		printf("student[%d] marks = %d\n",i+1,sum);

	}
	printf("\nHighest marks in each subject :\n");
	for(j=0;j<3;j++)
		{
			for(i=0;i<n;i++)
			{
				if(marks[i][j]>marks[i+1][j]&&marks[i][j]>marks[i+2][j])
				{
					high = i;
				}
				else if(marks[i+1][j]>marks[i][j]&&marks[i+1][j]>marks[i+2][j])
				{
					high = i+1;
				}
				else
					high = i+2;
					break;
			}
			printf("subject[%d] = student[%d]\n",j+1,high+1);
		}
	printf("\nstudent who obtained the highest total marks: ");
	for(i=0;i<3;i++)
	{
		if(topper[i]>topper[i+1]&&topper[i]>topper[i+2])
		{
			printf("%d",i+1);
			break;
		}
		else if(topper[i+1]>topper[i]&&topper[i+1]>topper[i+2])
		{
			printf("%d",i+2);
			break;
		}
		else
		{
			printf("%d",i+3);
			break;
		}
	}
	return 0;
}
