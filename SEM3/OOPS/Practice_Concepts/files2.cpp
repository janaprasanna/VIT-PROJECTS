#include<iostream>
#include<fstream>
using namespace std;

// to write in a file, "<<" symbol is used.
int main()
{
      ofstream file1;
      file1.open("write.txt");
       
       if(!file1)
       {
             cout<<"file is not created.";
       }
       else
       {
             cout<<"file created successfully.";
             file1<<"hello, a sample text to check write mode in files";
             //file1.close();
       }
       // other method
       char ch;
       while((ch = getchar())!='\n')
       {
             file1<<ch;
       }
       file1.close();
}