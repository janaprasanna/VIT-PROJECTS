 #include<stdio.h>
 int partition(int a[],int lb,int ub)
 {
 	int pivot = a[lb],start,end;
 	start = lb;
 	end = ub;
 	while(start<end)
 	{
 		while (a[start]<=pivot)
 	{
 		start++;
	}
	while(a[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
		int temp=0;
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
	}
	int temp=0;
	temp = a[end];
	a[end]=a[lb];
	a[lb]=temp;
	return end;
 }
 void quicksort(int a[],int lb,int ub)
 {
 	int i;
 	if(lb<ub)
 	{
 		int loc;
 		loc = partition(a,lb,ub);
 		quicksort(a,lb,loc-1);
 		quicksort(a,loc+1,ub);
	}

 }
 void main()
 {
 	int a[9]= {7,6,10,5,9,2,1,15,7},i;
 	quicksort(a,0,8);
 	printf("a[] is : ");
  for(i=0;i<9;i++)
 		{
 			printf("%d ",a[i]);
		}

 }
