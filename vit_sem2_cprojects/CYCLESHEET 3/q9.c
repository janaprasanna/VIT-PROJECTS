#include <stdio.h>
#include <stdlib.h>

int main()
{


   int num;char str[1000]="\nA Energetic, dedicated and a passionate college student working towards software engineer in BCA at VIT university, Vellore. Aiming to use my coding knowledge and problem-solving skills and implement them in web development. Fluent in C, C++ and Python with a basic understanding of HTML and CSS. I possess a strong ability and desire to learn much more about other concepts related to web development to understand the basic level for software development.\n";
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("/Users/janaprasanna/My Drive/resume.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    printf(fptr,"%s","\t\t  RESUME");
    fprintf(fptr,"%s","\n\t\t  ---------");
    fprintf(fptr,"%s","\nName : Jana Prasanna G");
    fprintf(fptr,"%s","\nAddress: NO: X, TN Nagar, Arakkonam,TamilNadu");
    fprintf(fptr,"%s","\nEmail: janaprasanna@gmail.com");
    fprintf(fptr,"%s","\n------------------------------------------");
    fprintf(fptr,"%s","\n\t\tPERSONAL SUMMARY\n--------------------------------------\n");
    fprintf(fptr,"%s",str);
    fprintf(fptr,"%s","\n\t\tOBJECTIVE\n----------------------------------------------------");
    char str2[100]="\nI’m looking for an internship where I can utilize my coding skills and try to proficient it further for enrolling in competitive programming.";
    fprintf(fptr,"%s",str);
    fprintf(fptr,"%s","\n/t/tEDUCATIONAL QUALIFICATIONS\n");
    fprintf(fptr,"%s","Navy children School, INS Rajali, Arakkonam");
    fprintf(fptr,"%s","2017-10th Pass with an aggregate of 75 percent.");
    fprintf(fptr,"%s","Dr VGN Matriculation Higher secondary school, Arakkonam");
    fprintf(fptr,"%s","2019-12th Pass in Computer Science, with an aggregate of 77 percent");
    fprintf(fptr,"%s","VIT University, vellore");
    fprintf(fptr,"%s","Bachelor of Computer Application,Current GPA 9.05,Graduation year 2023");
    fprintf(fptr,"%s","\n\t\tSKILLS\n-------------------------------------------------\n");
    fprintf(fptr,"%s","\n• Knowledge on basic fundamentals in Python, C, C++, HTML, CSS.");
    fprintf(fptr,"%s","\n• Leadership and teamwork experience.");
    fprintf(fptr,"%s","\n• A professional Typewriter.");
    fprintf(fptr,"%s","\n• Languages known : Tamil, English and Hindi.");
    fprintf(fptr,"%s","\n\t\tCAREER OBJECTIVE\n-----------------------------------------------");
    fprintf(fptr,"%s","\nSoon-to-be a software engineer or an developer with a passion for developing many free softwares to reach more audience and build many web apps for non-technical users regarding of their requirements.");
    fclose(fptr);
   return 0;
}