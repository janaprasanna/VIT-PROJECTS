//20BCA0047 JANA PRASANNA
#include<iostream>
#include<string.h>
using namespace std;
 class Date
 {
       

       private:
            int day;
            int month;
            int year;
            int datemax, monthmax ;


       public:
       void getcurrentdate();
       void calculate_date();
       void displayrenewaldate();


 };
 void Date :: getcurrentdate()
 {
       cout<<"\nEnter the current Renewal date of your sim card: ";
       cin>>day>>month>>year;
       calculate_date();
 }

 void Date :: calculate_date()
 {
     
             if(month %2 !=0)
             {
                   datemax = 31;
                   monthmax = 12;
                   for(int i=1;i<=56;i++)
                   {
                         day = day + i;
                         if(day > datemax )
                         {
                               day = 1;
                               month =  month + 1;
                         }
                         if(month>12)
                         {
                               month = 1;
                           
                               year = year + 1;
                         }
                   }
                   
             }
             else
             {
                   datemax = 30;
                   monthmax = 12;
                   for(int i=1;i<=56;i++)
                   {
                         day = day + i;
                         if(day > datemax)
                         {
                               day = 1;
                               month = month + 1;
                         }
                         if(month>12)
                         {
                               month = 1;
                               
                               year = year + 1;
                         }     
                   }
             }
            this->displayrenewaldate();
              
              
    
 }

void Date :: displayrenewaldate()
{
      
      cout<<day<<"/"<<month<<"/"<<year;
      cout<<"\n";
}


 int main()
 {
       class Date D1;
       
      
     cout<<"\nYour next successive renewal dates are:\n";

          for(int i=0;i<5;i++)
          {
               D1.getcurrentdate();
               D1.calculate_date();
          }
     
      
       return 0;
 }