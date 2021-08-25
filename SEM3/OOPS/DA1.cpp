#include<iostream>
using namespace std;
/* question 1:
class vehicle
{
      private:
            float acceleration, initial_vel, displacement;
            int time;
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
      cout<<"Enter the time(s) interval upto which the displacement has to be calculated:";
      cin>>time;
}
void vehicle :: calculate()
{
      displacement = (initial_vel * time) + ((acceleration*(time*time))/2);
}
void vehicle :: display()
{
      cout<<"The vehicle has been displaced by: "<<displacement<<" metres";
}
int main()
{
      class vehicle D1;
      D1.getdetails();
      D1.calculate();
      D1.display();

}*/



/* question 2 : */
/*
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