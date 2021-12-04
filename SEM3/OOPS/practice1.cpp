// Unary Operator Overloading
# include<iostream> using namespace std;
class Counting {
private:
int count;
public:
// No argument Constructor
Counting() {
count = 0; }
//Parameterized Constructor Counting(int n)
{
count = n; }
void disp() {
cout<<"In Counting, count value is :"<<count<<endl; }

class Counting operator ++(); // Pre Inc class Counting operator ++(int); // Post Inc
};
/*
// Pre Incrementation ++ Operator function void Counting::operator ++()
{
count = count + 1;
// count++; }
*/
// Pre Incrementation operator function using nameless objects class Counting Counting:: operator ++()
{
/*class Counting temp; count++;
temp.count = count;
return temp;
*/
// Counting CC(n); // Nameless object return (Counting(++count) );

}
// Post Incrementation operator function using nameless objects class Counting Counting:: operator ++(int)
{
/*class Counting temp; count++;
temp.count = count; return temp;
*/
return (Counting(count++) ); }
int main() {
class Counting C1(10); class Counting C5,C6;
cout<<"\n\n Output of C1 !!!"<<endl; C1.disp();

cout<<"\n\n Output of C6 !!!"<<endl; C6.disp();
C6 = ++C1;
cout<<"\n\n Output of C1 !!!"<<endl; C1.disp();
cout<<"\n\n Output of C6 !!!"<<endl;
C6.disp(); /*******************************************************/
cout<<"\n\n Output of C1 !!!"<<endl; C1.disp();
cout<<"\n\n Output of C5 !!!"<<endl; C5.disp();
C5 = C1++;
cout<<"\n\n Output of C1 !!!"<<endl; C1.disp();
cout<<"\n\n Output of C5 !!!"<<endl; C5.disp();
}

OUTPUT:
Output of C1 !!!
In Counting, count value is :10
Output of C6 !!!
In Counting, count value is :0
Output of C1 !!!
In Counting, count value is :11
Output of C6 !!!
In Counting, count value is :11
Output of C1 !!!
In Counting, count value is :11
Output of C5 !!!
In Counting, count value is :0
Output of C1 !!!
In Counting, count value is :12
 
Output of C5 !!!
In Counting, count value is :11 /************************************************************/
// Static Data Member and Static Member Function
/* Special:
It is common to all of the objects. It is common to the entire class.
This will be accessed by the class name and not by the Object name. */
# include<iostream> using namespace std;
class Complex {
private:
int real, imag;
all of the objects public:
static int count; // Static Data Member is common to

};
Complex(int r, int i) {
real =r;
imag =i;
// count=100;// XXXX Wrong }
// void get(); void disp();
void find_Count();
void Complex::disp() {
count++;
cout<<"Real: "<<real<<"\t"<<" Imag: "<<imag<<endl; }
void Complex::find_Count() {
cout<<count<<endl; }
int Complex::count = 100; // Initialize the static data member int main()

//
}
Output:
Real: 10
C1.disp();
cout<<"\n Current count value is:"<<endl; C1.find_Count();
class Complex C2(100,200); C2.disp();
cout<<"\n Current count value is:"<<endl; C2.find_Count();
class Complex C3(1000,2000); C3.disp();
cout<<"\n Current count value is:"<<endl; C3.find_Count();
cout<<"\n count value is:"<<Complex.find_Count();
Imag: 20
{
class Complex C1(10,20); // Complex number "C1" is : 10 + 20i
 Current count value is: 101

Real: 100 Imag: 200
Current count value is: 102
Real: 1000 Imag: 2000
Current count value is: 103
