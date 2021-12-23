#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
      ofstream f1;char ch;int flag =1;
      f1.open("howtowrite.txt", ios::out);
      if(!f1)
            cout<<"No such file found";
      else{
           while(1)
           {
                  ch = getchar();
                  if(ch != '\n')
                  {
                        f1<<ch;
                  }
                  else
                        break;

           }
            f1<<ch;
            f1.close();
      }
      return 0;

}