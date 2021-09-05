#include<iostream>
using namespace std;
class Bank_Account
{
      private:
            char bank_holder_name[50];
            long int Accnt_no;
            char Accnt_type[20]; int choice;
            double Accnt_bal, amt;

      public:
            void get();
            void deposit();
            void withdraw();
            void display_bal();
};
void Bank_Account :: get()
{
      cout<<"Enter Bank Holder name: ";
      gets(bank_holder_name);
      cout<<"Enter Account type: ";
      gets(Accnt_type);
      cout<<"Enter Account number: ";
      cin>>Accnt_no;
      Accnt_bal = 0.00;
      cout<<"\nYour initial Balance: Rs."<<Accnt_bal;
      int flag=1;
      while(flag=1)
      { 
            cout<<"\nEnter your choice (1,2,3)";
            cout<<"\n\n1.Depost\n2.Withdraw\n3.Account Summary\n4.exit";
            cin>>choice;
            switch (choice)
            {
            case 1:
                  deposit();
                  flag = 0;
                  break;
            case 2:
                  withdraw();
                  flag = 0;
                  break;
            case 3:
                  display_bal();
                  flag = 0;

                  break;
            case 4:
                  flag = 0;
                  exit(1);
                  break;
            
            default:
                  cout<<"wish to see you soon!";
                  break;
            }
      }
}
void Bank_Account :: deposit()
{
      cout<<"Enter your deposit amount (below 25000): Rs.";
      cin>>amt;
      if(amt>0.0 && amt<25000)
            this->Accnt_bal = amt;
      else  
            cout<<"Invalid amount!!";
      
}
void Bank_Account :: withdraw()
{
      cout<<"enter the withdrawal amount: Rs.";
      cin>>amt;
      if(amt>0.0 && amt<=this->Accnt_bal && Accnt_bal>=0)
      {
            if(Accnt_bal-amt >0)
            {
                  this->Accnt_bal = Accnt_bal - amt;
                  cout<<"\nwithdraw success.";
                  cout<<"\n\nYour Current Balance: Rs."<<Accnt_bal;
            }
            else
                  cout<<"\nCannot withdraaw! check your balance.";
      }
      else  
      {
            cout<<"\nCannot perfom operation!!";
            cout<<"\nYour Account Balance: Rs."<<Accnt_bal;
      }
}
void Bank_Account :: display_bal()
{
      cout<<"\n\n\tAccount Summary\n";
      cout<<"\nAccount number : "<<Accnt_no;
      cout<<"\nAccount type: "<<Accnt_type;
      cout<<"\nHolder name: "<<bank_holder_name;
      cout<<"\nCurrent Balance: Rs."<<Accnt_bal;
}
int main()
{
      class Bank_Account holder;
      holder.get();
      return 0;
}