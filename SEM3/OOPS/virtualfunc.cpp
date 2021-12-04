// Example for Virtual Function

//Shape <--- Rectangle
  // Shape::area() ; Rectangle::area()
  
# include<iostream>
using namespace std;

//Base Class
class Shape
{
	protected:
		       int f1, f2, s_area;
		       
	public:
		 virtual void get()
			  {
			  	cout<<"\n\n Enter f1 & f2 values: "<<endl;
			  	cin>>f1>>f2;
			 }		       
			  
		 virtual void calc_area()
			 {
			 	s_area = f1 + f2;
			 	
			 	cout<<"Area is : "<<s_area<<endl;
			 	
			 } 
};


class Rectangle:public Shape
{
	protected:
				float breadth, width, rect_area;
				
	public:
			  void get()				
				{
					Shape::get(); // To read the Base Class Data Members
					
					cout<<"\n\n Enter the breadth and width"<<endl;
					cin>>breadth>>width;
				}
				
			 void calc_area()
				{
					rect_area = breadth * width;
					
					cout<<"\n Area of Rectangle is:"<<rect_area<<endl;
				}
};

int main()
{/*
	cout<<"\n\n Processing the Shape Class !!!"<<endl;
	
	class Shape S1;
	
	S1.get();
	
	S1.calc_area();
	
	

	cout<<"\n\n Processing the Rectangle Class !!!"<<endl;
	
	class Rectangle R1;
	
	R1.get();
	
	R1.calc_area();
	
 	*/	
	
	// Dynamic Binding is achieved here
	/*
	cout<<"\n\n Processing the Shape Class Using Pointers !!!"<<endl;
	
	class Shape S1;
	
	class Shape *sptr; // Base class Pointer
	
	sptr = &S1;
	
	sptr->get();
	
	sptr->calc_area();
	
	*/
	cout<<"\n\n Processing the Rectangle Class Using Pointers !!!"<<endl;
	
	class Rectangle R1;
	
	class Shape *sptr; // Base class Pointer
	
	sptr = &R1;
	
	sptr->get();
	
	sptr->calc_area();
	
	
	/*
	class Rectangle *rptr;
	
	rptr = &R1;
	rptr = &S1; // wrong
	rptr->get();
	
	rptr->calc_area();
	*/
	/***********/
	
	
	
}
/*

OUTPUT:
Processing the Shape Class Using Pointers !!!


 Enter f1 & f2 values:
10 20
Area is : 30


 Processing the Rectangle Class Using Pointers !!!


 Enter f1 & f2 values:
10 20


 Enter the breadth and width
12 24

 Area of Rectangle is:288

--------------------------------
Process exited after 77.54 seconds with return value 0
Press any key to continue . . .

*/