#include<iostream>
using namespace std;

class Stud_Details
{
      protected: 
            char Name[50];
            char RegNo[10];
      public:
            void get()
            {
                  fflush(stdin);
                  cout<<"\nEnter student name: ";
                  gets(Name);
                  fflush(stdin);
                  cout<<"\nEnter register Number: ";
                  gets(RegNo);
            }
            void disp()
            {
                  cout<<"\nStudent Name: "<<Name;
                  cout<<"\nReg No: "<<RegNo;
            }
};
class InternalAsessment_Perfomance : public virtual Stud_Details
{
      protected:    
            float internalassement_marks;
      public:
            void get()
            {
                  Stud_Details :: get();
                  cout<<"\nEnter the total marks obtained in Internal Assessment: ";
                  cin>>internalassement_marks;
            }
            void disp(){
                  Stud_Details :: disp();
                  cout<<"\nInternal Assessment Score: "<<internalassement_marks;
            }
};
class FinalAssessment_Performance : public virtual Stud_Details
{
      protected:
            float finalassessment_marks;
      public:
            void get()
            {
                  //Stud_Details :: get();
                  cout<<"\nEnter the marks obtained in final assessment: ";
                  cin>>finalassessment_marks;
            }
            void disp()
            {
                  Stud_Details :: disp();
                  cout<<"\nFAT Score: "<<finalassessment_marks;
            }
};
class Overall_results : public  InternalAsessment_Perfomance, public FinalAssessment_Performance
{
      protected: 
            float overall_mark;
            float pass_mark;
            int result;
      public:
            void get()
            {
                  InternalAsessment_Perfomance :: get();
                  FinalAssessment_Performance :: get();
                  cout<<"\nEnter the Pass mark Margin: ";
                  cin>>pass_mark;
            }
            void find_results()
            {
                  result = 0;
                  overall_mark = internalassement_marks + finalassessment_marks;
                  if(overall_mark>=pass_mark)
                  {
                        result = 1;
                  }
                  else{
                        result = 0;
                  }

            }
            void disp()
            {
                  InternalAsessment_Perfomance :: disp();
                  FinalAssessment_Performance :: disp();
                  cout<<"\nOverall marks Obtained: "<<overall_mark;
                  if(result == 1)
                  {
                        cout<<"\n\nCONGRATULATIONS!! The Student has PASSED !! ";
                  }
                  else
                  {
                        cout<<"\n\nBAD LUCK!! The Student has FAILED !!";
                  }
            }
};

int main()
{
      Overall_results s1;
      s1.get();
      s1.find_results();
      s1.disp();
      return 0;
}