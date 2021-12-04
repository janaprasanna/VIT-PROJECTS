// C++ program to develop a event registration form using classess and objects
#include<iostream>
#include<string.h>
using namespace std;
// webinar on career opportunities
class registration
{
      private:
            char student_name[50];
            int reg_no;
            char *choice;
            char mail_id[20];
            char university_name[50];
            int mobile_no;
            char campus[20];
            char *choice2;
            
            char address[50];
            char *choice3;
            char *choice4;
            int search;
            
      
      public:
            registration();
            int instructions();
            void enroll();
            void confirmdetails();
            void searchusers(int n, class registration temp);
            void displaydetails(class registration temp);


};

registration :: registration()
{
      choice = new char[5];

      choice2 = new char[15];
      
      choice3 = new char[5];
      choice4 = new char[5];
      strcpy(student_name, "undefined");
      reg_no = 0;
      mobile_no = 0;
      strcpy(campus, "undefined");
      strcpy(mail_id, "undefine");
      strcpy(university_name, "undefined");
}

int registration :: instructions()
{
      cout<<"\n\tXYZ Organaisation, Chennai, Tamil Nadu 631 004"<<endl;
      cout<<"\n-------------------------------------------------------------------"<<endl;
      cout<<"\n\n\tTopic\tCAREER OPPORTUNITIES AFTER B.TECH FOR ALL ENGINEERING STUDENTS."<<endl;
      cout<<"\n----------------------------------------------------------------------------------------";
      cout<<"\n\n\tDescription\tThe Office of Career Development Centre\nXYZ org is organizing a free webinar on Career Opportunities after B. Tech for all Engineering students (GATE) "<<endl;
      cout<<"\n--------------------------------------------------------------------------------------------------"<<endl;
      cout<<"\n\t Time\t 06:30 PM - 07:00 PM"<<endl;
      cout<<"\n\tSpeaker\tMr. XXX - M.Tech --VIT University, vellore"<<endl;
      cout<<"\n\n\n\tNOTE: The following programme is conducted to ensure that it reaches\n";
      cout<<"all the students without any barriers. So the webinar is totally FREE of cost and ";
      cout<<"all the students of a particular university are allowed to take part in this webinar. Thank you"<<endl;
      cout<<"\n\n\nEnroll(yes/no):"<<endl;
      gets(choice);
            
      if(strcmp(choice, "yes") ==0 || strcmp(choice, "y") ==0)
      {
            enroll();
            return 1;
      }
            
      else
      {
            cout<<"\n\n\nThanks for visiting our Website. Hope you participate in upcoming events."<<endl;
            return 0;
      }
}

void registration :: enroll()
{
      cout<<"\n\n\n\tRegistration Form\n-------------------------------------------------------------------------"<<endl;
      cout<<"\n\nBiodata\n---------------------------------------------------------------------------\n";
      cout<<"\n\n\nEnter Student Name: ";
      gets(student_name);
      cout<<"\nEnter Student Register no./ ID no. : ";
      cin>>reg_no;
      cout<<"\nEnter Email ID:";
      fflush(stdin);
      gets(mail_id);
      cout<<"\nEnter University Name: ";
      gets(university_name);
      cout<<"\n\n\tContact Information\n----------------------------------------------------------------------------------\n";
      cout<<"Enter Mobile no: ";
      cin>>mobile_no;
      cout<<"Enter address: ";
      gets(address);
      cout<<"\nHow did you hear about our webinar? "<<endl;
      cout<<"\n*1. Social Media";
      cout<<"\n2. Advertisement";
      cout<<"\n3. XYZ students";
      cout<<"\n4. Other\n";
      gets(choice2);
      this->confirmdetails();


} 
void registration :: confirmdetails()
{
      cout<<"\n\n\tConfirm Status"<<endl;
      cout<<"\n\n\nAre you sure you want to get registered?";
      gets(choice3);
            
      if(strcmp(choice3, "yes") == 0)
            cout<<"\n\nRegistration Success!!"<<endl;
      else 
            cout<<"\n\nRegistration Cancelled!!"<<endl;
}

void registration :: searchusers(int n, class registration temp)
{
      cout<<"\n\nNumber of users registered for the Programme: "<<n;
      cout<<"\nDo you want to search a user? "<<endl;
      gets(choice4);
      if(strcmp(choice4, "yes") == 0)
      {
            cout<<"\nEnter serial number: ";
            cin>>search;
            for(int i=0; i<n;i++)
            {
                  if(search == n)
                  {
                        cout<<"\nUser found!!";
                        this->displaydetails(temp);
                        
                  }
                  else
                        cout<<"User not found!!"<<endl;
            }
      }
}

void registration :: displaydetails(class registration temp)
{
      cout<<"\n\nStudent details\n---------------------------------------------------------------\n";
      cout<<"\nStudent Name: "<<temp.student_name;
      cout<<"\nStudent Register number: "<<temp.reg_no;
      cout<<"\nStudent mail Id: "<<temp.mail_id;
      cout<<"\nUniversity: "<<temp.university_name;
      cout<<"\nCampus: "<<temp.campus;
      cout<<"\nStudent Mobile NO: "<<temp.mobile_no<<endl;
}
int main()
{
      int n ;
      cout<<"enter number of users: ";
      cin>>n;

      class registration R[n],  temp;

      for(int i=0;i<n;i++)
      { 
            R[i].instructions();
            temp = R[i];
            R[i].searchusers(i, temp);
      }
      
      return 0;
      
}