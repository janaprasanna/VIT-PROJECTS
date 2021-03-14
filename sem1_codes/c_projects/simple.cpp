#include<iostream>
using namespace std;
class myclass
{
public:
  void mymethod();
};
void myclass::mymethod()
{
  cout<<"helloworld";
}
int main()
{
  myclass myobj;
  myobj.mymethod();
  return 0;
}
