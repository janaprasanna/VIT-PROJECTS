#include<iostream>
using namespace std;
class book
{
      private:
            char book_title[50];
            char author_name[50];
            float price;
            char year_of_pub[10];
      public:
      void addbooks();
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
      gets(year_of_pub);
      cout<<"\nEnter price: Rs.";
      cin>>price;
      cout<<"\n\n";
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
      cout<<"\n\tBook Details of price < 2000\n";
      cout<<"\n--------------------------------------------------";
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
      class book b[100];
      char name[50];
      int n;
      cout<<"Enter book count:";
      cin>>n;
      for(int i=0;i<n;i++)
      {
            b[i].addbooks();
      }
      cout<<"Enter author name :";
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