# include <stdio.h>
int main()
{
    int temperature;
   char choice;
   fflush(stdin);
    printf("Enter the value of temperature = ");
    scanf("%d",&temperature);
    switch(temperature)
    {
        case 1:
            printf("HOT");
            break;
        case 2:
            printf("LUKE WARM");
            break;
        case 3:
            printf("COLD");
            break;
        default:
            printf("OUT OF RANGE");
    }
            printf("\n");
            printf("Do you want to do it again?   = ");
            fflush(stdin);
            choice = getchar();
            if(choice == 'y'||choice =='Y')
                main();
        return 0;
}
