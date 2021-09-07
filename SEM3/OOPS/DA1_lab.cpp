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
} 
*/


//questin 2
/*
#include<iostream>
using namespace std;
class Distance
{
      private:
            float feet, inches;
      public:
            void getdistance(int N);
            void compare(class Distance cd);
            void display(int flag);
};

void Distance :: getdistance(int N)
{ 
      cout<<"Input Distance "<<N<<" (feet, inches):";
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
      d1.getdistance(1);
      d2.getdistance(2);
      d1.compare(d2);
      return 0;
}*/


//question 3

#include<iostream>
#include<string.h>
using namespace std;

class inventory
{
      private:
            char title[50];
            char author[50];
            char publisher[50];
            char s_title[50], s_author[50];
            double price;
            int stock_position;
            
      public:
            void getbooks();
            void searchbooks(class inventory b[], int n);
};
void  inventory :: getbooks()
{
      cout<<"\nEnter books name:";
      fflush(stdin);
      gets(title);
      cout<<"\nEnter author :";
      fflush(stdin);
      gets(author);
      cout<<"\nEnter publisher name: ";
      fflush(stdin);
      gets(publisher);
      cout<<"\nEnter price: RS.";
      cin>>price;
      cout<<"\nEnter book count:";
      cin>>stock_position;

}
void inventory :: searchbooks(class inventory b[], int n)
{     
      int borrow_count = 0; double borrow_price = 0;;
      cout<<"\nEnter books name and author name to search:";
      fflush(stdin);
      gets(s_title);
      gets(s_author);
      for(int i=0;i<n;i++)
      {
            if(strcmp(s_title, b[i].title )==0 && strcmp(s_author, b[i].author)==0)
            {
                  cout<<"\nBOOK IS AVAILABLE.";
                  if(b[i].stock_position>0)
                  {
                        cout<<"\nBOOK COUNT: "<<b[i].stock_position;
                        cout<<"\nEnter no. of books to be borrowed:";
                        cin>>borrow_count;
                        b[i].stock_position = b[i].stock_position - borrow_count;
                        if(b[i].stock_position>0)
                        {
                              borrow_price = b[i].price * borrow_count;
                              cout<<"\nCost: Rs."<<borrow_price;
                              cout<<"\n\nAvailable Book count:"<<b[i].stock_position;
                              break;
                        }
                        else 
                              cout<<"\nRequested Number of copies are not available.";
                        break;
                  }
                  else
                        cout<<"\nSTOCK NOT AVAILABLE. YET TO COME.";
                  break;
            }
            else 
                  cout<<"\nBOOK IS NOT FOUND IN THE LIBRARY.";
            break;

      }
}

int main()
{
      int n;
      cout<<"\n\tEnter number of books to be added:";
      cin>>n;
      class inventory b[n], S;
      for(int i=0;i<n;i++)
      {
            cout<<"\n\tEnter Book "<<i+1<<" details:\n";
            b[i].getbooks();
      }
    
      S.searchbooks(b, n);
      return 0;
}