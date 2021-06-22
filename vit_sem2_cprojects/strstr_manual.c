# include <stdio.h>
# include <string.h>
# define SIZE 100
void cstrstr( char [], char[] );
int main()
{
    char str[SIZE], sub[SIZE/5];
    printf( "\nEnter Main String = " );
    gets(str);
    printf( "\nEnter Sub String = " );
    gets(sub);
    printf ("\nPeforming Strstr \n" );
    cstrstr( str, sub );
    return 0;

}

void cstrstr( char string[], char sub[] )
{
    char temp[SIZE];
    int i = 0, j = 0, k = 0, sublen = strlen(sub), flag = 0;
    for( i = 0; string[i] != '\0'; i++ )
    {
        if( sub[j] != string[i] )
        {
            j = 0;

        }

        if( sub[j] == string[i] )
        {
            j++;
        }
        if( j == sublen)//rohan  0 1 2 3 4   ---> 5 - 1
        {
            flag = i - sublen+1;
            break;
        }

    }

    j = 0;
    for( i = flag; string[i] != '\0'; i++ )
    {
        temp[j] = string[i];
        j++;

    }
    temp[j] = '\0';
    puts(temp);

}