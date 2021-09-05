#include<iostream>
#include<string.h>
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
      void sortbooks(class book B);
      void viewbooks();
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
void book :: viewbooks()
{
      cout<<"\nBooks Name:"<<book_title;
      cout<<"\nAuthor:"<<author_name;
      cout<<"\nYear of publication:"<<year_of_pub;
      cout<<"\nprice:Rs."<<price;
}

void book :: sortbooks(class book b)
{
      class book temp;
      if(strcmp(book_title, b.book_title)>0)        //  abv    Abv
      {
            strcpy(temp.book_title, b.book_title);
            strcpy(b.book_title, book_title );
            strcpy(book_title, temp.book_title);
      }
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
     else
            cout<<"\nNo books were found with this author name.";
}
void book :: displaybooks()
{
     
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
      cout<<"\nAdd books:\n";
      for(int i=0;i<n;i++)
      {
            cout<<"\n\tBook "<<i+1<<" details:\n";
            b[i].addbooks();
      }

      
      for(int i=0;i<n-1;i++)
      {
            B = b[i];                      // abcd            efgh          ijkl  
          for(int j=i+1;j<n;j++)
          {
                 B.sortbooks(b[j]);
          }
           
      }
      
      cout<<"\n\nAdded books:";
      for(int i=0;i<n;i++)
      {
            cout<<"\n\tBook "<<i+1<<" details:\n";
            b[i].viewbooks();
      }
      


      cout<<"\n\nEnter author name :";
      fflush(stdin);
      gets(name);
      for(int i=0;i<n;i++)
      {
            b[i].searchbooks(name);
      }

      cout<<"\n--------------------------------------------------";
      cout<<"\n\n\tBook Details of price > 2000\n";
      for(int i=0;i<n;i++)
      {

            b[i].displaybooks();
      }
      return 0;

}