#include<iostream>
#include<math.h>
using namespace std;
/*

forms of quadratic eqn:
      1. y = ax^2 + bx + c
      2. y = a(x - r1)(x - r2)
      4. y = a(x - h)^2 + k

      */

class quadratic
{
      private: 
            float a, b, c, x1, x2;
            float h, k;
            float discriminant, realPart, imaginaryPart;
      public:
            void calroot();
            void calvariants();
            void calproductofroots();
};

void quadratic :: calroot()
{
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}

void quadratic :: calvariants()
{
      cout<<"\n\n standard form:";
      cout<<"\naX2 + bX + c";
      cout<<"\n"<<a<<"X2 + ("<<b<<"X) + "<<c;
      cout<<"\n\n Factor form:";
      cout<<"\na(x - x1)(x - x2)";
      cout<<"\n"<<a<<"(x - ("<<x1<<") )( x - ("<<x2<<") )";
      cout<<"\n\nVertex form:";
      h = -b/2*a;
      k = a*(h*h) + b*(h) + c;
      cout<<"\na( X - h )^2 + k";
      cout<<"\n"<<a<<"( x - ("<<h<<") )^2 + ("<<k<<")";
}
void quadratic :: calproductofroots()
{
      cout<<"\nPR = -b/a";
      if(a == 0)
      {
            cout<<"\nPR = infinity";
      }
      else
            cout<<"\n\nProduct of the eqaution = "<< c/a;
}

 int main()
 {
       class quadratic q1;
      q1.calroot();
      q1.calvariants();
      q1.calproductofroots();
       return 0;
 }
