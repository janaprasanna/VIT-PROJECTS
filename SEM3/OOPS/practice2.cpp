#include<iostream>
using namespace std;


template<typename T>
class sorted_merge
{
      private:
            int n;
            T arr[100];
      public:
            void get()
            {
                  cout<<"\nEnter n value:";
                  cin>>n;
                  cout<<"enter "<<n<<" sorted elements:\n";
                  for(int i=0;i<n;i++)
                  {
                        cin>>arr[i];
                  }
            }
            void merge(sorted_merge O1, sorted_merge O2)
            {
                  int i;
                  n = O1.n + O2.n;
                  for(i=0;i!=O1.n;i++)
                  {
                        arr[i] = O1.arr[i];
                  }
                  for(int c=0, q=O2.n;q>0;q--)
                  {
                        arr[i] = O2.arr[c];
                        i++;
                        c++;
                  }

                  for(int p=0;p<n-2;p++)
                  {
                        for(int q=p+1;q<n;q++)
                        if(arr[p]>arr[q])
                        {
                              int temp = arr[p];
                              arr[p] = arr[q];
                              arr[q] = temp;
                        }
                  }
                  

            }
            void disp()
            {
                  cout<<"\nafter merge:\n";
                  for(int i=0;i<n;i++)
                  {
                        cout<<" "<<arr[i];
                  }
            }
};


int main()
{
      sorted_merge<int> O1, O2, O3;
      O1.get();
      O2.get();
      O3.merge(O1, O2);
      O3.disp();
      return 0;
}
*/

/*
class Time
{
      private: 
            int hr, min, sec;
      public:
            void get()
            {
                  cout<<"\nEnter the time: ";
                  cin>>hr>>min>>sec;
            }
            void disp()
            {
                  cout<<"\nTime is: "<<hr<<":"<<min<<":"<<sec;
            }
            class Time operator-(class Time Obj)
            {
                  class Time temp;
                  temp.hr = hr - Obj.hr;
                  temp.min = min - Obj.min;
                  temp.sec = temp.sec - Obj.sec;
                  if(temp.sec<=0)
                  {
                        temp.min = temp.min - 1;
                        temp.sec = temp.sec + 60;
                  }
                  if(temp.min<=0)
                  {
                        temp.hr = temp.hr - 1;
                        temp.min = temp.min + 60;
                  }
                  return temp;

            }
};

int main()
{
      Time t1, t2, t3;
      t1.get();
      t2.get();
      t3 = t1 - t2;  // t1.
      t3.disp();
      return 0;
}
*/

/*
class sales_without_offer
{
      private:
            char prod_name[50];
            int qty;float price;
            float total_cost;
      public:
            void get1()
            {
                  gets(prod_name);
                  cin>>qty;
                  cin>>price;
            }
            float cost1()
            {
                  total_cost = qty * price;
                  return total_cost;
            }
};
class sales_with_offer
{
      private:
            char prod_name[50];
            int qty;float price, offer_percent, offer_amt;

            float total_cost;
      public:
            void get2()
            {
                  fflush(stdin);
                  gets(prod_name);
                  cin>>qty;
                  cin>>price;
                  cin>>offer_percent;
            }
            float cost2()
            {
                  total_cost = qty * price;
                  offer_amt = (offer_percent/100) * total_cost;
                  total_cost = total_cost - offer_amt;
                  return total_cost;
            }
};
class overall_sales: public sales_with_offer, public sales_without_offer
{
      private:
            float overall_cost;
            float price1, price2;
      public:
            void get3()
            {
                  get1();
                  get2();
                  price1 = cost1();
                  price2 = cost2();
            }
            void cost3()
            {
                  overall_cost = price1 + price2;
            }
            void disp()
            {
                  cout<<"\nOverall cost: "<<overall_cost;
            }
};
int main()
{
      class overall_sales O1;
      O1.get3();
      O1.cost3();
      O1.disp();
      return 0;
}
*/



class concat
{
      private:
            char str[50];
      public:
            void get()
            {
                  gets(str);
            }
            void disp()
            {
                  cout<<"\nstring: "<<str;
            }
            friend class concat operator +(concat s1, concat s2);
      
};
class concat  operator +( class concat s1, class concat s2)
{
      class concat temp;
      strcat(temp.str, s1.str);
      strcat(temp.str, s2.str);
      return temp;
}

int main()
{
      class concat s1, s2, s3, s4;
      s1.get();
      s2.get();
      s3.get();
      s4 = s1 + s2 ;
      s4.disp();
      return 0;
}
