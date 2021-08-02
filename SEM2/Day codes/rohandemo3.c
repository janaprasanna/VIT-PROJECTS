# include <stdio.h>
# include <math.h>
float duration(float,float,float);
int main()
{
    fflush(stdin);
    float P= 0.0;//P as in principle
     float A = 0.0;//A as in amount paid per month
    float i = 0.0;//i as in interest paid per month
    printf("\n Enter Principle value = ");
    scanf("%f",&P);
    printf("\nEnter the interst amount between zero to 100\n");
    scanf("%f",&i);
    if(i<0 || i>100)
    {
 printf("Wrong input for interest Reinitializing.. ");
  printf("\n\n");
        main();
    }
    i = i/100;
        printf("Enter the Value To be paid per month (A) = ");
        scanf("%f",&A);
        if(A>P || A<=0)
        {
              printf("Value Exceeded Principle Value  or Value = 0");
            printf("    ..Reinitializing");
            printf("\n\n");
            main();
        }
        //All desired inputs acquired
        float interest = 0.0;
        int month = 0;
     float amount = P;
     while(amount !=0)
     {
          month++;
         printf("Amount in %d = %f\n",month,amount);
         if(amount<A)
         {
             A = amount;
             printf("\n The Final Month Cost = %f\n",amount);
         }
      amount = amount - A;
      interest = (i * amount);
      if(amount !=0)
      printf("Interest Charged in month %d = %f$\n",month,interest);
      amount = amount + interest;
}
}
