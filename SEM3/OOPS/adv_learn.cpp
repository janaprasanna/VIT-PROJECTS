#include<iostream>
using namespace std;
/*
class Vehicles {
      private:
            char model[20];
            char vehicle_name[20];
            int vehicle_id;
      protected:
            int RTO_id;
            int insurance_id;
      public:
            
            void basic_details(){
                  cout<<"\nEnter Vehicle ID: ";
                  cin>>vehicle_id;
                  fflush(stdin);
                  cout<<"\nEnter Vehicle Model: ";
                  gets(model);
                  fflush(stdin);
                  cout<<"\nEnter Vehicle Name: ";
                  gets(vehicle_name);
            }
            void display_basic(){
                  cout<<"Vehicle ID:"<<vehicle_id<<endl;
                  cout<<"Vehicle Name: "<<vehicle_name<<endl;
                  cout<<"Vehicle Model:"<<model<<endl;
            }
};
class Registered : public Vehicles
{
      public:
            void registered_vehicles(){
                  cout<<"\nEnter RTO Number:";
                  cin>>RTO_id;
            }  
            void display_registered(){
                  cout<<"\nRTO Number: "<<RTO_id<<endl;
            }
};
class Insurance : public Registered
{
      
      public:
            void insurance_details(){
                  cout<<"\nEnter Insurance Id:";
                  cin>>insurance_id;
            }
            void display_insurance(){
                  cout<<"\nInsurance ID: "<<insurance_id<<endl;
            }
};

int main()
{
      class Insurance i1;
      i1.basic_details();
      i1.registered_vehicles();
      i1.insurance_details();
      i1.display_basic();
      i1.display_registered();
      i1.display_insurance();

      return 0;
} */

#include <iostream>
using namespace std;

class CurrentAccount
{
      private:
            char ac_holder_name[20];
            int ac_no;
            
      protected:
            float deposit, withdraw; 
            


      public:
            float ac_bal;
            void get_bal()
            {
                  cout<<"\nenter account holder name: ";
                  gets(ac_holder_name);
                  fflush(stdin);
                  cout<<"\nenter account number: ";
                  cin>>ac_no;
                  cout << "\n enter balance :";
                  cin >> ac_bal;
            }
            void disp_bal()
            {
                  cout<<"\nName: "<<ac_holder_name;
                  cout<<"\nAc No: "<<ac_no;
                  cout << "\n Balance : " << ac_bal << endl;
            }
};

class operations : public CurrentAccount
{
   

public:
    void getDeposit()
    {
        cout << "\n Enter Deposit Amount :";
        cin >> deposit;
        ac_bal = ac_bal + deposit;
    }
    void getWithdraw()
    {
        cout << "\n Enter Withdraw Amount :";
        cin >> withdraw;
        ac_bal = ac_bal - withdraw;
    }
    void printDep()
    {
        cout << "\nDeposit :" << deposit << endl;
    }
    void printWith()
    {
        cout << "\nWithdraw :" << withdraw << endl;
    }
};

class Interest : public operations
{
    int int_per;
    float net;

public:
    void getInterest()
    {
        cout << "\n Enter Interest percentage: ";
        cin >> int_per;
        net = (int_per * ac_bal) / 100;
        ;
        ac_bal += net; 
    }
    void printInterest()
    {
        cout << "\nInterest Cost: " << net << endl;
        cout<<"\nCurrent Balance: "<<ac_bal<<endl;
    }
};

int main()
{
    class Interest O;

    O.get_bal();
    O.getDeposit();
    O.getWithdraw();
    O.getInterest();

    O.disp_bal();
    O.printDep();
    O.printWith();
    O.printInterest();
}
