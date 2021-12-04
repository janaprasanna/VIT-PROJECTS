#include<iostream>
using namespace std;

/* question 2   20BCA0047
class Vector
{
      private:
            int size;
            int *arr;

      public:
            Vector(){}
            Vector(int n){
                  size = n;
                  arr = new int[size];  // dynamic allocation
            }
            void get(){
                  cout<<"\nEnter "<<size<<" elements to the vector:\n";
                  for(int i=0;i<size;i++){
                        cin>>arr[i];
                  }
            }
            void operator=(Vector temp){         //operator function
                  for(int i=0;i<size;i++){
                        arr[i] = temp.arr[i]; 
                  }
            }
            void display(){
                  cout<<"\nVector elements:\n";
                  for(int i=0;i<size;i++){
                        cout<<arr[i]<<endl;
                  }
            }
};

int main()
{
      int n;
      cout<<"\nEnter size for the vector elements: ";
      cin>>n;
      class Vector V1(n), V2(n);
      V1.get();
      V2 = V1;    // V2.=(V1)
      V2.display();


}
*/

/* question 1  20BCA0047
 
# include<iostream>
using namespace std;
class Time {
      public:
            int hr, min, sec;
            // No Argument Constructor Time()
            Time(){
                  hr = min = sec = 0; 
            }
            void get(int pos);
            void disp();
            class Time operator -(class Time T); // Operator function void disp();

};
void Time::get(int pos) {
      if(pos == 0)
      {
            cout<<"\n\n Enter the starting time: "<<endl;
            cin>>hr>>min>>sec; 
      }
      else{
            cout<<"\n\n Enter the ending time: "<<endl;
            cin>>hr>>min>>sec; 
      }
      }
void Time :: disp() {
      cout<<"\n\n The Time Difference is :"<<hr<<" : "<<min<<" : "<<sec<<endl;
      }
// Operator fucntion for "+"
class Time Time::operator -(class Time T) {
      class Time temp; 
      temp.hr = hr - T.hr; 
      temp.min = min - T.min; 
      temp.sec = sec - T.sec;
      if(temp.sec <= 0) {
            temp.min = temp.min - 1;
            temp.sec = temp.sec + 60;
            }
      if(temp.min <= 0) {
            temp.hr = temp.hr - 1;
            temp.min = temp.min + 60; }
      return temp; 
      }
int main() {
      class Time T1, T2, T3;
      T1.get(0);
      T2.get(1);                                     // END        START
      T3 = T2 - T1; // Operator overloading applies  04:30:20  -  02:15:40  = 02:14:40
      //T3 = T1.operator +(T2); // class Time operator +(class Time T); // T3 = temp;
      T3.disp(); 
}
*/

//  question 3   20BCA0047
#include<string.h>
#define size 100
class Reverse
{
      private:
            char *str;
      
            
      public:
            Reverse(){
                   str = new char[size];
            }
            Reverse  operator!(){
                  class Reverse temp;
                  int len = strlen(str);
                  for(int i=0,j=len-1;str[j]!='\0';i++,j--){
                        temp.str[i] = str[j];
                  }
                  return temp;
                  
            }
          
            void get(){
                  cout<<"\nEnter a string (max of 100 words):";
                  gets(str);
            }
            void disp(){
                  cout<<"\nThe Reverse of the string is: "<<str;
            }

};



int main(){
      class Reverse r1, r2;
      r1.get();
      r2 = !r1;   // r1.!(r2)
      r2.disp();
      
      return 0;
}
