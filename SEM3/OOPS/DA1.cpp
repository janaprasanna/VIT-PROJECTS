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

/* question 2 : */

#include<iostream>
using namespace std;
class gradegenerator
{
      union  // anonymous union
            {
                  long int aathar_No;
                  long int Driving_License_No;
                  long int PAN_Card_No;
            };
      private:
            float marks1, marks2, marks3, avg; int n;
            char reg_no[10], grade;
            int choice;
            
      public:
            void validID();
            void getmarks(int i);
            void generategrade();
            void display();
};
void gradegenerator :: getmarks(int i)
{
      cout<<"\nstudent "<<i<<"details:\n";
      cout<<"Enter Reg No:";
      fflush(stdin);
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
      
      cout<<"\nchoose the Gov ID :";
      cout<<"\n1.Aadhar number\n2.PAN card number\n3.Driving license number";
      cin>>choice;
      switch (choice)
      {
      case 1:
            cout<<"Enter aadhar number: ";
            cin>>aathar_No;
            break;
      case 2:
            cout<<"Enter PAN card number: ";
            cin>>PAN_Card_No;
            break;
      case 3:
            cout<<"Enter driving license number: ";
            cin>>Driving_License_No;
            break;
      
      }
      
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
    
      cout<<"\nReg No:"<<reg_no;
       switch (choice)
      {
      case 1:
            cout<<"\naadhar number: "<<aathar_No;
            break;
      case 2:
            cout<<"\nPAN card number: "<<PAN_Card_No;
            break;
      case 3:
            cout<<"\ndriving license number:" <<Driving_License_No;
            break;
      }
      cout<<"\nYour grade:"<<grade;
      
}


int main()
{
      int n;
      class gradegenerator S[100];
      cout<<"Enter number of students:";
      cin>>n;
      for(int i=0;i<n;i++)
      {
            S[i].getmarks(i+1);
            S[i].validID();
            S[i].generategrade();
      }
      
      
      cout<<"\n\n\t\tREPORT\n\n";
      for(int i=0;i<n;i++)
      {
           S[i].display();
      }
      
}  



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