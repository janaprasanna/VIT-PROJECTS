/*
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int Element_Search(int *, int);
int Element_Search(char *, char *);
int main()
{
      int n, element, found = 0; char str[100], search[50];
      cout<<"\nEnter no. of elements: ";
      cin>>n;
      int *ptr = (int*) malloc(n * sizeof(int));
      cout<<"\nEnter "<<n<<" elements to the list:";
      for(int i=0;i<n;i++)
            cin>>ptr[i];
      cout<<"\nEnter an element to search in the list:";
      cin>>element;
      found = Element_Search(ptr, element);
      if(found)
            cout<<"\nElemnet is found in the list.";
      else  
            cout<<"\nElement doesn't exist in the list.";
      cout<<"\nEnter a string:";
      fflush(stdin);
      gets(str);
      cout<<"\nEnter a word or char to seach in the original string:";
      gets(search);
      Element_Search(str, search);
      if(found)
            cout<<"\nstring is found in the list.";
      else  
            cout<<"\nstring doesn't exist in the list.";
      return 1;
}
int Element_Search(int list[], int element)
{
      int  i=0;
      while(list[i])
      {
            if(list[i] == element)
            {
                  return 1;
            }
            i++;
      }
      return 0;
}
int Element_Search(double list[], double element)
{
      int i=0;
      while(list[i])
      {
            if(list[i] == element)
                  return 1;
      } 
      i++;
}
int Element_Search(char str[], char search[])
{
      int i = 0;char* ptr;
      while(str[i])
      {
            ptr = strstr(str, search);
            if(ptr)
                  return 1;
            else  
                  return 0;
      }
} */



//questin 2
/*
#include<iostream>
using namespace std;
class Distance
{
      private:
            float feet, inches;
      public:
            void getdistance();
            void compare(class Distance cd);
            void display(int flag);
};

void Distance :: getdistance()
{ 
      cout<<"Input Distance 1(feet, inches):";
      cin>>feet>>inches;
}
void Distance :: compare(class Distance cd)
{
      float difference_feet, difference_inches ;
      difference_feet = feet - cd.feet;
      difference_inches = inches - cd.inches;
      if(difference_feet>0)
      {
            cout<<"\nDifference: "<<difference_feet<<" feet"<<difference_inches<<" inches"; 
            display(0);
      }
      else if(difference_feet<0)
      { 
            
            cout<<"\nDifference: "<<-difference_feet<<" feet"<<-difference_inches<<" inches";
            display(1);
      }
      else if(difference_feet==0)
      { 
            if(difference_inches==0){
                  cout<<"\nDifference: "<<difference_feet<<" feet"<<difference_inches<<" inches";
                  display(2);
            }
            else if(difference_inches>0)
            {
                  cout<<"\nDifference: "<<difference_feet<<" feet"<<difference_inches<<" inches";
                  display(0);
            }
            else  
            { 
                  cout<<"\nDifference: "<<-difference_feet<<" feet"<<-difference_inches<<" inches";
                  display(1);
            }
      }
      else  
            cout<<"\nError occured";
            
}
void Distance :: display(int flag)
{
      if(flag==0)
            cout<<"\nDistance 1 is greater Distance 2";
      else if(flag==1)
            cout<<"\nDistance 2 is greater than Distance 1";
      else if(flag==2)
            cout<<"\nBoth the Distances are equal";
}

int main()
{
      class Distance d1, d2;
      d1.getdistance();
      d2.getdistance();
      d1.compare(d2);
      return 0;
}
*/

//question 3

#include<iostream>
using namespace std;
int main()
{
      
      return 0;
}