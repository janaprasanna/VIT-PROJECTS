#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    printf("enter your resume below:\n");
    fgets(sentence,1000,stdin);
    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("/Users/janaprasanna/My Drive/program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    
    fscanf(fptr,"%s",sentence);
    //fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}