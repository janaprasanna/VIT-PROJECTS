#include<iostream>
using namespace std;
int main()
{
    int units,extra =0; float price = 0.0;
    cout<<"Enter Username :";
    char a[24];
    fgets(a,sizeof(a),stdin);
    cout<<"Enter the Units consumed by the user"<<a;
    cin>>units;
    if(units>=20 && units<200)
    {
      price = 1.5 * units;
      price = price + 20;   // fixed charges = Rs20.
    }
    if(units>=200&&units<400)
    {
      price = ((100)*2) + ((100)*3) ;
      price =  price + 30;   //fixed charges = Rs30.
    }
    else  if(units>=400 && units<700)
    { 
      price = (100*2) + (300*3) ;
      price = price + 30;
    }
    else if(units>700)
        {
        	price = (100*3.5) + (300*4.6) + (300*6.6);
        	price = price + 50;     //fixed charges=Rs50
    	}
    else
		 printf("Error");
    
      cout<<"username:"<<a;
      cout<<"price:Rs."<<price;
    return 0;

}
