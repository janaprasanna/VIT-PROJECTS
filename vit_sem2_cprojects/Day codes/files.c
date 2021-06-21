#include<stdio.h>
void main()
{
    FILE *f;
    int number,quantity; float price,value;
    char item[10],filename[10];
    printf("input file name:");
    scanf("%s",&filename);
    f=fopen("/Users/janaprasanna/My Drive/filedemo2.txt","w");
    printf("Input inventory details:\n");
    printf("ItemName  Number  Price  Quantity\n");
    for(int i=1;i<3;i++)
    {
        fscanf(stdin,"%s %d %f %d",&item,&number,&price,&quantity);
        fprintf(f,"\n%s %d %0.3f %d",item,number,price,quantity);
    }
    fclose(f);
    fprintf(stdout,"\n\n");
    f=fopen("/Users/janaprasanna/My Drive/filedemo2.txt","r");
    printf("Item  Number  Price  Quantity  Value\n\n");
    for(int i=1;i<3;i++)
    {
        fscanf(f,"%s %d %f %d",&item,&number,&price,&quantity);
        value = price * quantity;
        fprintf(stdout,"%s %d %f %11.2f\n",item,number,price,quantity,value);
    }
    fclose(f);
}