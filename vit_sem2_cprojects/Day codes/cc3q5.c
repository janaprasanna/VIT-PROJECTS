#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void stringReplace(const char *str, const char *subStr, const char *replaceStr)
{
    int i = 0, count = 0; // to count the repetition of string
    int len1 = strlen(replaceStr);
    int len2 = strlen(subStr);
 
    /* 
    Suppose:
 
    a[]="this is a book with stickers";
    b[]="book";
    strstr(a,b); --> o/p --> book with stickers --> if not found it will print null
 
    This function returns a pointer to the first occurrence 
    */
 
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], subStr) == &str[i])
        {
            // Uncomment the below line & check what we are getting from strstr
            printf("\n%d %s", i, strstr(&str[i], subStr));
 
            // ----Why we are using strstr ?----
            // We can find the starting index of banana using strstr here
            // comparing it with &str[i] means starting from s ith index we will compare the array
 
            count++;       // counting the repition of sub string
            i += len2 - 1; // incrementing the pos of i by substring length so that we can check the next repetition
        }
    }
    // char newString[i + count * (len1 - len2) + 1]; --> allocating array's size by finding the difference between the length of 2 strings
    char newString[(i+2)+1];
    // Or use this if you're sure that the string won't exceed 1000 char
    //char newString[1000];
 
    //--------- Replacing substring----------
 
    i = 0;       // it is for newstring index incrementation
    while (*str) // looping through each char of str until found null
    {
        if (strstr(str, subStr) == str) // if we reach banana's (b) index
        {
            strcpy(&newString[i], replaceStr); // replacing banana with apple
            i += len1;                         // incrementing i with len of apple so that we can move ahead in new string
            str += len2;                       // incrementing i with len of banana so that we can move ahead in original str
        }
        else
            newString[i++] = *str++; // if we didn't reach banana's index yet, we will just copy the original str elements to new str as it is
    }
    newString[i] = '\0';
 
    printf("\nNew String: %s\n", newString);
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