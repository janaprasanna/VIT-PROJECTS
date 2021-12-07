#include<iostream>
#include<fstream>
using namespace std;

// to write in a file, "<<" symbol is used.
int main()
{
      ifstream file1;
      file1.open("write.txt");
       
       if(!file1)
       {
             cout<<"file does not exists.";
       }
       else
       {
             cout<<"\nfile exists.";
             
             //file1.close();
       }
       // other method
    char ch;
    int count =0;
    while (!file1.eof())
    {
        file1.get(ch);
        if(ch=='i' || ch=='u')
        {
              count++;
        }
        //fout << ch;
    }
    file1.close();
    cout<<"Number of 'i' and 'u' in the file are:"<< count;
    return 0;
}