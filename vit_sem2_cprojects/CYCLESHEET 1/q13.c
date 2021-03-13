#include<stdio.h>
int main()
{
    int units,extra =0;
    printf("Enter Username :");
    char a[24];
    fgets(a,sizeof(a),stdin);
    printf("Enter the Units consumed by the user %s: ",a);
    scanf("%d",&units);
    float price = 0.0;
    if(units<=200)
    {
       price = (80.00/100.00)*units;
       price =  price + 100;
    }
 	else  if(units>200 && units<=300)
    {
    	extra = units - 200;
        price = (80.00/100.00)*units + ((90.00/100.00)*extra);
        price = price + 100;

    }
    else if(units>300)
        {
        	extra = units  - 300.00;
        	price = ((80.00/100.00)*200) + ((90.00/100.00)*(100.00)) + (1.00*extra);
        	price = price + 100.00;
    	}
    else
		 printf("Error");
    if (price>400)
    {
    	price = price + (price * 15.00)/100.00;

	  }
    else
      printf("No additional charges acquired !");
	  printf("\nUser Name : %s",a);
    printf("Total Cost = Rs.%5.2f",price);

}
