#include<iostream>
using namespace std;
// question 1 20BCA0047
class Fraction
{
      private:
            float number;
            
      public:
            Fraction(float no)
            {
                  number = no;
            }
            Fraction() {}
              Fraction operator/(Fraction  second){
                  cout<<"\nFraction representation: "<<number<<"/"<<second.number<<endl;
                  Fraction temp;
                  temp.number = number / second.number;
                  return temp;

            } 
            Fraction operator+(Fraction  second){
                  Fraction temp;
                  temp.number = number + second.number;
                  return temp;

            }
              Fraction operator-(Fraction  second){
                  Fraction temp;
                  temp.number = number - second.number;
                  return temp;

            }
            void display(){
                  cout<<number<<endl;
            }
            
};




int main()
{
      class Fraction O1(4), O2(5), R;
      
      
      R = O1 + O2; // addition overloading
      cout<<"Addition result: ";
      R.display();
      cout<<"\nSubraction results: ";
      R = O1 - O2; //subaration overloading
      R.display();
      cout<<"\nDivision results: ";
      R = O1 / O2; // Division overloading
      R.display();

      return 0;
} 


/*  question 2 20BCA0047
class Vector
{
    int size;
    int *x;

public:
    Vector(int n);
    bool operator==(class Vector);
    class Vector operator=(int);
    void get();
    void disp();
};

Vector::Vector(int n)
{
    size = n;
    x = new int[size];   // dynamic allocation
}

bool Vector::operator==(class Vector V)
{
    for (int i = 0; i < size; i++)
    {
        if (x[i] == V.x[i])
        {
            return true;
        }
    }
    return false;
}

class Vector Vector::operator=(int)
{
    Vector temp(size);
    for (int i = 0; i < size; i++)
    {
        temp.x[i] = x[i];
    }
    return temp; // returns a vector object (copying object info)
}

void Vector::get()
{
    for (int i = 0; i < size; i++)
    {
        cin >> x[i];
    }
}

void Vector::disp()
{
    cout << "\n Displaying Vector elements ..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << x[i] << " ";
    }
}

int main()
{
    int n;
    cout << "\n enter number of elements to be stored in array: ";
    cin >> n;
    class Vector V1(n), V2(n);
    cout << "\n\n Enter values for 2 arrays : " << endl;
    cout<<"Array 1:\n";
    V1.get();
    cout<<"\nArray 2: \n";
    V2.get();
    V1 = V2;  //Assignment op overloading
    if (V1 == V2)  // equality op overloading
    {
        cout << "\n Both Vectors are Equal" << endl;
    }
    else
    {
        cout << "\n Both Vectors are inequal" << endl;
    }
    return 0;
}
*/

