#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void DtoB();
void HDtoD();
void OtoD();
void BtoD();
void BtoHD();
void BtoO();
void OtoB();
void HDtoB();
int flag = 1;
int main()
{
    while(flag == 1)
    {
        int choice;
        printf("\n\n*******************************CONVERSIONS****************************************");
        printf("\n1.Decimal to Binary\n2.Hexadecimal to Decimal\n3.Octal to Decimal\n4.Binary to Decimal");
        printf("\n5.Binary to HexaDecimal\n6.Binary to Octal\n7.Octal to Binary\n8.HexaDecimal to Binary");
        printf("\n9.Exit");
        printf("\n\nEnter the type of conversion to perform: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                DtoB();
                break;
            case 2:
                HDtoD();
                break;
            case 3:
                OtoD();
                break;
            case 4:
                BtoD();
                break;
            case 5:
                BtoHD();
                break;
            case 6:
                BtoO();
                break;
            case 7:
                OtoB();
                break;
            case 8:
                HDtoB();
                break;
            case 9:
                flag = 0;
                exit(1);
                break;
            default:
                printf("Invalid options !!");
                break;
        }
    }
    
    return 0;
}
void DtoB()
{
    int num,b[20],i=0;
   printf("Enter a decimal number: ");
   scanf("%d", &num);
   while(num>0)
   {
       b[i]=num%2;
       num/=2;
       i++;
   }
   printf("\nBinary equivalent: ");
   for(int j=i-1;j>=0;j--)
   {
        printf("%d",b[j]);
   }
}

void HDtoD()
{
    char hex[15];
    long long decimal;
    int val;

    decimal = 0;

    printf("Enter the hexadecimal number: ");
    gets(hex);
    int len=strlen(hex);
    len--;


    for(int i=0; hex[i]!='\0'; i++)
    {

        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    printf("Decimal number = %lld", decimal);
}

void OtoD()
{
    int oct,dec=0,i=0;
    printf("Enter an octal number: ");
    scanf("%d", &oct);

     while(oct != 0)
    {
        dec += (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }
    printf("\nDecimal number: %d", dec);
}

void BtoD()
{
    int num,dec = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem= num%10;
        dec= dec+rem*base;
        num= num/10;
        base= base*2;
    }
    printf ("\nDecimal number:  %d ", dec);
}

void BtoHD()
{
    int bin, hex=0, mul=1, count=1, rem, i=0;
    char hexa_val[20];
    printf("Enter a Binary Number: ");
    scanf("%d", &bin);
    while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(count%4==0)
        {
            if(hex<10)
                hexa_val[i] = hex+48;
            else
                hexa_val[i] = hex+55;
            mul = 1;
            hex = 0;
            count = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            count++;
        }
        bin = bin/10;
    }
    if(count!=1)
        hexa_val[i] = hex+48;
    if(count==1)
        i--;
    printf("\nHexadecimal Value: ");
    for(i=i; i>=0; i--)
        printf("%c", hexa_val[i]);
}

void BtoO()
{
    long int bin;
    printf("Enter a binary number: ");
    scanf("%ld", &bin);

    int oct = 0, dec = 0, i = 0;

    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("\nOctal value: %d", oct);
}

void OtoB()
{
     int oct;
    printf("Enter an octal number: ");
    scanf("%d", &oct);

     int dec = 0, i = 0;
     long int bin = 0;


    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    printf("Binary value: %ld", bin);
}

void HDtoB()
{
    char hex[20];
    printf("Enter a hexadecimal value: ");
    gets(hex);

    int i=0;
    while(hex[i])
    {
        switch(hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1000");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        }
        i++;
    }
}
 