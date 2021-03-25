# include <stdio.h>
int main()
{
    int flag;
   char choice;
    printf("Enter the value of flag = ");
       fflush(stdin);
    scanf("%d",&flag);
    switch(flag)
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
    printf("Do you want to do it again?");
    getchar();
    choice = getchar();

    while(choice == 'y'||choice == 'Y');
      

    return 0;
}
