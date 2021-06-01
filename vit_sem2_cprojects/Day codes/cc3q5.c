#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void stringReplace(const char *str, const char *subStr, const char *replaceStr)
{
    int i = 0, count = 0;
    int len1 = strlen(replaceStr);
    int len2 = strlen(subStr);
 
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], subStr) == &str[i])
        {
            count++;
            i += len2 - 1;
        }
    }
    char *newString = (char *)malloc(i + count * (len1 - len2) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, subStr) == str)
        {
            strcpy(&newString[i], replaceStr);
            i += len1;
            str += len2;
        }
        else
            newString[i++] = *str++;
    }
    newString[i] = '\0';
 
    printf("New String: %s\n", newString);
}
int main()
{
    printf("\n\n");
    char str[] = "There are 30 bananas on a banana tree";
    char subStr[] = "banana";
    char replaceStr[] = "apple";
 
    printf("Original string: %s\n", str);
    stringReplace(str, subStr, replaceStr);
    printf("\n\n");
    return 0;
}