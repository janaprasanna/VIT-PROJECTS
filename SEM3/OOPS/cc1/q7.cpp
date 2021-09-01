#include<iostream>
#include<string.h>
using namespace std;
class book
{
      private:
            char author_name[50];
            float price;
            char year_of_pub[10];
      public:
      char book_title[50];
      void addbooks();
      void viewbooks(class book B);
      void searchbooks(char str[]);
      void displaybooks();
};
void book :: addbooks()
{
      cout<<"\nEnter book name: ";
      fflush(stdin);
      gets(book_title);
      cout<<"\nEnter Author:";
      gets(author_name);
      cout<<"\nEnter year of publication: ";
      fflush(stdin);
      gets(year_of_pub);
      cout<<"\nEnter price: Rs.";
      cin>>price;
      cout<<"\n\n";
}
void book :: viewbooks(class book B)
{
      for(int i=0;)
      if(strcmp(book_title, B.book_title)>0)
      cout<<"\n\nBook Name: "<<book_title;
      cout<<"\nAuthor: "<<author_name;
      cout<<"\nBook price: Rs."<<price;
      cout<<"\nYear of published:  "<<year_of_pub;
}
void book :: searchbooks(char name[])
{
     if(strcmp(name, author_name)==0)
     {
           cout<<"\n\nBook found with the author "<<name;
           cout<<"\n--------------------------------------------------";
           cout<<"\n\tBook Details\n";
           cout<<"\nBook Name: "<<book_title;
           cout<<"\nBook price: Rs."<<price;
           cout<<"\nYear of published:  "<<year_of_pub;
     }
}
void book :: displaybooks()
{
      cout<<"\n--------------------------------------------------";
      cout<<"\n\n\tBook Details of price > 2000\n";
      if(price>2000)
      {
            cout<<"\nBook Name: "<<book_title;
            cout<<"\nAuthor: "<<author_name;
            cout<<"\nBook price: Rs."<<price;
            cout<<"\nYear of published:  "<<year_of_pub;
      }
}
int main()
{
      class book b[100], B;
      char name[50], temp[50];
      int n;
      cout<<"Enter book count:";
      cin>>n;
      for(int i=0;i<n;i++)
      {
            b[i].addbooks();
      }



      cout<<"\n\nAdded books:";
      B = b[0];
      for(i=1;i<n;i++)
      {
            b[i].viewbooks(B);
      }
      




      cout<<"\n\nEnter author name :";
      fflush(stdin);
      gets(name);
      for(int i=0;i<n;i++)
      {
            b[i].searchbooks(name);
      }
      for(int i=0;i<n;i++)
      {
            b[i].displaybooks();
      }

}