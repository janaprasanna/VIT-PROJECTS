// General application usign classes and objects 

 

// Employee Detail Processing 

 

// Object Composition or Object Delegation. 

 

// One object is part of another object. 

 

// Example: In Car, engine is part of it. 

 

// Date of Birth & Date of Joining object is part of the Employee Object. 

 

# include<iostream> 
using namespace std; 
# include<string.h> 
class DDate 
{ 
      private: 
            int day, month, year; 
      public:	 
            void get() 
            { 
            cin>>day>>month>>year; 
            } 
            void disp() 
            { 
            cout<<day<<"/"<<month<<"/"<<year<<endl; 
            } 
}; 

 
class Employee 

{ 

      private: 

            int emp_no; 

            char emp_name[20]; 

            class DDate emp_dob; // Date of Birth 

            char emp_designation[20]; 

            class DDate emp_doj; // Date of joining 

            int emp_experience; 

            float emp_salary; 

      

      public: 

            void get(); 

            void promotion_eligible_list(int y); // List the employees who are eligible for promotion 

            void disp(); 

            

            int get_Experience(); // To get the experience of an employee 

      

            void find_Senior_Employee(class Employee E[],int n1); 

      

}; 

 

void Employee::get() 

{ 

cout<<"\n\n Enter the Employee Details:"<<endl; 
cout<<"\n\n Enter the Employee Number: "<<endl; 
cin>>emp_no; 
cout<<"\n\n Enter the Employee Name: "<<endl; 
cin>>emp_name; 

 

cout<<"\n\n Enter the Date of Birth (day/month/year): "<<endl; 

//	cin>>emp_dob.day>>emp_dob.month>>emp-dob_year; 

emp_dob.get(); 

 

cout<<"\n\n Enter the Employee Designation: "<<endl; 

cin>>emp_designation; 

 

cout<<"\n\n Enter the Date of Joining (day/month/year): "<<endl; 

//cin>>emp_doj.day>>emp_doj.month>>emp-doj_year; 

emp_doj.get(); 

 

cout<<"\n\n Enter the Employee Experience: "<<endl; 

cin>>emp_experience; 

 

cout<<"\n\n Enter the Employee Salary: "<<endl; 

cin>>emp_salary; 

 

} 

 

void Employee::disp() 

{ 

      cout<<"\n\n The Employee Details !!! "<<endl; 

      

      cout<<"\n\n The Employee Number: "<<emp_no<<endl; 

      

      cout<<"\n\n The Employee Name: "<<emp_name<<endl; 

      

      cout<<"\n\n Date of Birth is:  "<<endl;  

      emp_dob.disp(); 

      

      cout<<"\n\n The Employee Designation: "<<emp_designation<<endl; 

      

      cout<<"\n\n Date of Joining is:"<<endl; 

      emp_doj.disp(); 

      

      cout<<"\n\n The Employee Experience: "<<emp_experience<<endl; 

      

      cout<<"\n\n The Employee Salary: "<<emp_salary<<endl; 

 

} 

 

void Employee::promotion_eligible_list(int y) 

{ 

if(emp_experience >= y) 

{ 

cout<<"\n\n\t Employee Number & Name: "<<emp_no<<"\t"<<emp_name<<endl; 

 

} 

} 

 

int Employee::get_Experience() 

{ 

return emp_experience; 

} 

 

void Employee::find_Senior_Employee(class Employee E[],int n1) 

{ 

for(int i=1;i<n1;i++) 

{ 

if(E[i].emp_experience > emp_experience) 

 { 

 	*this = E[i]; 

 }	 

 /* 

 	emp_no = E[i].emp_no; 

 	 

 	strcpy(emp_name, E[i].emp_name); 

 	 

 	strcpy(emp_designation, E[i].emp_designation); 

 	 

 	emp_salary = E[i].emp_salary; 

 } 

*/ 

} 

} 

 

int main() 

{ 

int n; 

class Employee E[100]; // Object Array 

 

cout<<"\n\n Enter the total no. of employees in the organisation:"<<endl; 

cin>>n; 

 

cout<<"\n\n Enter ALL the employee details here !!!"<<endl; 

for(int i=0;i<n;i++) 

{ 

cout<<"\n\n Employee "<<i+1<<" Detail: "<<endl; 

E[i].get(); 

} 

 

cout<<"\n\n ALL the Employee Details are listed below:"<<endl; 

for(int i=0;i<n;i++) 

{ 

cout<<"\n\n Employee "<<i+1<<" Detail : "<<endl; 

E[i].disp(); 

} 

/* 

int yrs; 

cout<<"\n\n Enter the no. of years experience required for promotion from the last promotion: "<<endl; 

cin>>yrs; 

 

cout<<"\n\n List of Employees eligible for Promotion !!!"<<endl; 

for(int i=0;i<n;i++) 

{ 

E[i].promotion_eligible_list(yrs); 

} 

*/ 

/* 

int max = E[0].get_Experience(); 

 

int num = 0; 

 	 

for(int i=1;i<n;i++) 

{ 

if(E[i].get_Experience() > max) 

{ 

   max = E[i].get_Experience(); 

    

   num = i; 

    	} 

    	 

} 

 

cout<<"\n\n The Senior Employee of the Organisation is given below: "<<endl; 

 

E[num].disp(); 

 

 

class Employee SE; 

 

SE = E[0]; 

 

SE.disp(); 

 

SE.find_Senior_Employee(E,n); 

 

SE.disp(); 

*/ 

} 

 

 