#include<iostream>
#include<fstream>
using namespace std;
// program to create/open a file in cpp
// ofstream objects: used for creating/writing files 
// ifstream ojects: used for reading the file content.
// every file once opened via open() must be closed via close().

int main()
{
      ofstream f1;
      f1.open("jana.txt");
      if(!f1)
      {
            cout<<"file not present/created.";

      }
      else
      {
            cout<<"file created successfully.";
            f1.close();

            return 0;
      }
}