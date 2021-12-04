#include<iostream>
using namespace std;

class Family{
      protected:
            int age;
      public:
            void setage(int a)
            {
                  age = a;
            }
            virtual void checkSeniorCitizen()
            {
                  if(age > 18)
                  {
                        cout<<"\nCitizen status: Senior Citizen!";
                  }
                  else  
                  {
                        cout<<"\nCitizen status: Not a Senior Citizen!";
                  }
            }
};

class Father : public Family
{
      public: 
            void checkSeniorCitizen()
            {
                  if(age > 18)
                  {
                        cout<<"\nFather status: Senior Citizen!";
                  }
                  else  
                  {
                        cout<<"\nFather status: Not a Senior Citizen!";
                  }
            }
};

class Son : public Family
{
      public:
            void checkSeniorCitizen()
                  {
                        if(age > 18)
                        {
                              cout<<"\nSon status: Senior Citizen!";
                        }
                        else  
                        {
                              cout<<"\nSon status: Not a Senior Citizen!";
                        }
                  }
};

int main()
{
      Father father;
      Son son;

      Family* fptr; // base class pointers
      Family* sptr;

      fptr = &father;
      sptr = &son;

      fptr->setage(54);
      sptr->setage(17);

      fptr->checkSeniorCitizen();
      sptr->checkSeniorCitizen();


      return 0;
}