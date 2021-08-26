/*question 1:
#include<iostream>
using namespace std;
class vehicle
{
      private:
            float acceleration, initial_vel, displacement[4];
            float time_interval[4]={2,3.5,5,6.5};
      public:
            void getdetails();
            void calculate(); 
            void display();
};
void vehicle :: getdetails()
{
      cout<<"Input acceleration (m/s):";
      cin>>acceleration;
      cout<<"Input initial velocity(ms):";
      cin>>initial_vel;
      
}
void vehicle :: calculate()
{
      for(int i=0;i<4;i++)
      {
            displacement[i] = (initial_vel * time_interval[i]) + ((acceleration*(time_interval[i]*time_interval[i]))/2);
      }
      cout<<"\n";
}
void vehicle :: display()
{
      cout<<"Time intervals\tAcceleration\tinitial velocity\tDisplacement\n";
      for(int i=0;i<4;i++)
      {
            cout<<time_interval[i]<<"\t\t\t"<<acceleration<<"\t\t\t"<<initial_vel<<"\t\t\t"<<displacement[i]<<"\n";
      }
}
int main()
{
      class vehicle D1;
      D1.getdetails();
      D1.calculate();
      D1.display();

}

*/

// question 2 : 
/*
#include<iostream>
using namespace std;
class gradegenerator
{
      union  // anonymous union
            {
                  long int aathar_No;
                  char Driving_License_No;
                  char Family_Card_No;
                  char PAN_Card_No;
                  char Passport_No;
            };
      private:
            float marks1, marks2, marks3, avg;
            char reg_no[10], grade;
            
      public:
            void validID();
            void getmarks();
            void generategrade();
            void display();
};
void gradegenerator :: getmarks()
{
    
      cout<<"Enter Reg No:";
      gets(reg_no);
      cout<<"Input Marks(out of 100) in CAT 1:";
      cin>>marks1;
      cout<<"Input Marks(out of 100) in CAT 2:";
      cin>>marks2;
      cout<<"Input Marks(out of 100) in FAT:";
      cin>>marks3;
}
void gradegenerator :: validID()
{
      cout<<"Enter Govt proof ID: ";
      cin>>aathar_No;
}
void gradegenerator :: generategrade()
{
      avg = (marks1 + marks2 + marks3)/3;
      if(avg >= 90,0)
            grade = 'S';
      else if(avg>=80)
            grade = 'A';
      else if(avg >= 70.0)
            grade = 'B';
      else if(avg >= 60.0)
            grade = 'C';
      else if(grade >= 50.0)
            grade = 'D';
      else  
            grade ='F';
}
void gradegenerator :: display()
{
      cout<<"\n\nstudent details:\n\n";
      cout<<"\nGov ID:"<<aathar_No;
      cout<<"\nReg No:"<<reg_no;
      cout<<"\nYour grade:"<<grade;
}


int main()
{
      class gradegenerator S1;
      S1.getmarks();
      S1.validID();
      S1.generategrade();
      S1.display();
}  */

/* static Binding
#include <iostream>
using namespace std;
class static_class
{
      private:
            int a, b;
      public:
            int fun1(int x)
            { // first load() function.
                  a=x;
                  cout<<"The value of x is "<<x<<"\n";
                  return a;
            }
            int fun2(int x, int y)
            { //second load() function.
                  a=x;
                  b=y;
                  cout<<"The value of x is "<<x<<"\n";
                  cout<<"The value of y is "<<y<<"\n";
                  cout<<"The value of x * y is "<<a*b<<"\n";
                  return a*b;
            }
};
int main()
{
      static_class O1;
      O1.fun1(20); 
      O1.fun2(20,40); 
}
*/

/* Virtual functions and dyanamically binding
#include <iostream>
using namespace std;
 
class base {
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
 
    void show()
    {
        cout << "show base class" << endl;
    }
};
 
class derived : public base {
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
 
    void show()
    {
        cout << "show derived class" << endl;
    }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // virtual function, binded at runtime
    bptr->print();
 
    // Non-virtual function, binded at compile time
    bptr->show();
}*/