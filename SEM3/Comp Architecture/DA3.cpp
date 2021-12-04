// convert decimal to binary

#include <iostream>
#include <math.h>
using namespace std;
int E[10];
int i = 0;
int carry = 0, lsb = 0; // initially zero
int A;  // carry variable
int AVF;  // AVF = E     //       0



void complement(int *);
bool chkbinary(int );
long long binary(int );
int input();
void signed_mag_add(int, int, int);

int main() {
      int augend, addend; int n, flag = 0; // n --> larger bits among addend and augend
      int binary_addend, binary_augend;
      cout<<"\n\tInput combinations:\n\t1.(+) + (+)\n\t2.(-) + (-)"<<endl;
      cout<<"\nEnter value for Augend: ";
      augend = input();
      cout<<"\nEnter value for Addend: ";
      addend = input();
      cout<<"\nAugend: "<<augend<<"\nAddend: "<<addend<<endl;   
      
      if(addend<0 && augend<0)
      {

            addend = -addend;
            augend = -augend;
            cout<<"\nAugend: "<<augend<<"\nAddend: "<<addend<<endl;   
            binary_addend = binary(addend);
            binary_augend = binary(augend);
            cout<<"\nbinary Augend: "<<binary_augend<<"\nbinary Addend: "<<binary_addend<<endl;  
            flag = 1;
            if(binary_augend>binary_addend)
            {
                  n = augend;
            }
            else{
                  n = addend;
            }
            signed_mag_add(binary_augend, binary_addend, n);
            complement(E);
            
      }
      else if(addend>0 && augend>0)
      {
            binary_addend = binary(addend);
            binary_augend = binary(augend);
            if(binary_augend>binary_addend)
            {
                  n = augend;
            }
            else{
                  n = addend;
            }
            signed_mag_add(binary_augend, binary_addend, n);
      }
      else
      {
            cout<<"\nInvalid Input combinations!!. Aborted!"<<endl;
      }
      if(i!=0)
      {
            
            cout<<"\nSigned Magnitude Addition Result: ";
            while(i>=0)
            {     
                  cout<<E[i--];
            }
            
            AVF = A;
            cout<<"\nAVF = "<<AVF<<"\nA = "<<A<<endl;
      }
      
      
      return 0;
}
 bool chkbinary(int bin){
       if(bin%5 == 0 || bin%5 == 1 && bin>0)    
            return true;
       else 
            return false;
 }
int input()
{
      int choice;int binary_num;int decimal;
      cout<<"\nHow do you want to enter the input (1. Decimal Number  2. Binary Number): ";
            cin>>choice;
            switch(choice)
            {
                  case 1: 
                        cout << "Enter a decimal number: ";
                        cin >> decimal;
                        
                        //cout<<"\nBinary eq: "<<binary_eq;
                        break;
                  
                  
                  case 2:
                        cout<<"Enter a Binary Number: ";
                        cin>>binary_num;
                        if(chkbinary(binary_num))
                        {
                              cout<<"\nYour input is valid."<<endl;
                              return binary_num;
                              // signed_mag_add(binary_eq);
                        }                
                        else 
                        {
                              cout<<"\n\nInvalid input !! Check your digits.";
                        }    
                        break;
                        
            }  
            if(choice == 1)
                  return decimal;
            else  
                  return binary_num;
  
}


long long binary(int decimal)
{
  
  long long binary = 0;
  int rem, i = 1;
  
  
      while (decimal!=0) {
      rem = decimal % 2;
      decimal /= 2;
      binary += rem * i;
      i = i * 10;
      }
  
 

  return binary;
}

void complement(int result[])   
{
      
      int onesComp[10], twosComp[10];int j, carry_temp = 1; 
      j=i;
      while(j>=0)
      {
            if(result[j] == 1)
            {
                  onesComp[j] = 0;
            }
            else
            {
                  onesComp[j] = 1;
            }
            j--;
      }
      
      j=i;
      while(j>=i)
      {
            if(j==i)
            {
                  if(onesComp[j] == 1 && carry_temp == 1)
                  {
                        twosComp[j] = 0;
                        carry_temp = 1;
                  }
                  else if (onesComp[j] == 0 && carry_temp == 1)
                  {
                        twosComp[j] = 1;
                        carry_temp = 0;
                  }
                 
                  else
                  {
                        carry_temp=0;
                  }
                  j--;
            }
            else
            {
                  if(onesComp[j]== 0 && carry_temp==1)
                  {
                        twosComp[j]=1;
                        carry_temp=0;
                  }
                  else if(onesComp[j]==1 && carry_temp==1)
                  {
                        twosComp[j]=0;
                        carry_temp=1;
                  }
                  else
                  {
                        carry_temp = 0;
                  }
                  j--;
            }
      }

    
    cout<<"\n1's complement: ";
    j=i;
    while(j>=0)
    {
          cout<<onesComp[j];
          j--;
    }
    
    cout<<"\n2's Complement: ";
    j=i;
    while(j>=0)
    {
          cout<<twosComp[j];
          j--;
    }
}
      


      /*
      int temp[10]; int  j;
      j=i;
      while(j>=0)
      { for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';
            if(result[j] == 0)
                  temp[j] = 1;
            else  
                  temp[j] = 0;
            j--;
      }
      cout<<"\n1's complement: ";
      j=i;
      while(j>=0)
      {
            cout<<temp[j];
            j--;
      }
      j=i; int carry_temp = 0, lsb = 0;
      while(j>=0)
      {

            if(temp[j]==1)
            {
                  if(j==i)
                  { 
                        if(carry_temp+temp[j]+1==3)
                        {
                              lsb = 1; 
                              temp[j] =  lsb; 
                              carry_temp=1;
                        }
                        else if(carry_temp+temp[j]+1==2)
                        {
                              lsb = 0;
                              temp[j]=lsb;
                              carry_temp=1;
                        }
                        else
                        {
                              lsb = 0;
                              temp[j] = lsb;
                              carry = 0;
                        }
                  }
            
                  else
                  {
                        if(carry_temp+temp[j]==2)
                        {
                              lsb = 0; 
                              temp[j] =  lsb; 
                              carry_temp=1;
                        }
                        else if(carry_temp+temp[j]==1)
                        {
                              lsb = 1;
                              temp[j]=lsb;
                              carry_temp=0;
                        }
                        else
                        {
                              lsb = 0;
                              temp[j] = lsb;
                              carry = 0;
                        }
                  }
                  j--;
            }
            else
            {
                   if(j==i)
                  { 
                        if(carry_temp+temp[j]+1==2)
                        {
                              lsb = 0; 
                              temp[j] =  lsb; 
                              carry_temp=1;
                        }
                        else
                        {
                              lsb = 1;
                              temp[j] = lsb;
                              carry = 0;
                        }
                  }
                  else{
                        if(carry_temp+temp[j]==2)
                        {
                              lsb = 0; 
                              temp[j] =  lsb; 
                              carry_temp=1;
                        }
                        else if(carry_temp+temp[j]==1)
                        {
                              lsb = 1;
                              temp[j]= lsb;
                              carry_temp = 0;
                        }
                        else
                        {
                              lsb = 0;
                              temp[j] = lsb;
                              carry = 0;
                        }
                  }
                  j--;
            }
      
            
      }

      j=i;
      cout<<"\n2's complement: ";
      while(j>=0)
      {
            cout<<temp[j];
            j--;
      }
      cout<<"\n";
*/
      
//} 

void signed_mag_add(int augend, int addend, int n)
{
      
      
      int rem1, rem2;
       // result  variable
    // E = augend + addend     //    10110
                             //    10011  =     20121
      while(n!=0)
      { 
                   if(augend == 0 ) 
                  {
                        rem1 = 0;
                        
                              rem2 = addend % 10;
                        
                  }
                  else if(addend == 0)
                  {
                        rem2 = 0;
                       
                              rem1 = augend % 10;
                        
                  }
                  else
                  {
                        rem1 = augend % 10;   // 1010
                        rem2 = addend % 10;
                        augend = augend / 10;
                        addend = addend / 10;  // 1100
                  }
                  if(rem1==1 && rem2 == 1 && carry == 1)
                  {
                        lsb = 1;
                        carry = 1;
                  }
                  else if(rem1 == 0 && rem2 == 0 && carry == 0)
                  {
                        lsb = 0; carry = 0;
                  }
                  else if(rem1 == 1 && rem2 == 1 && carry == 0)
                  {
                        lsb = 0;
                        carry = 1;
                  }
                  else if(rem1 == 1 && rem2 == 0 && carry == 1)
                  {
                        lsb = 0;
                        carry = 1; 
                  }
                  else if(rem1 == 1 && rem2 == 0 && carry == 0)
                  {
                        lsb = 1; carry = 0;
                  }
                  else if(rem1 == 0 && rem2 == 1 && carry == 1)
                  {
                        lsb = 0;
                        carry = 1;
                  }
                  else if(rem1 == 0 && rem2 == 1 && carry == 0)
                  {
                        lsb = 1;
                        carry = 0;
                  }
                  else if(rem1 == 0 && rem2 == 0 && carry == 1)
                  {
                        lsb = 1;
                        carry = 0;
                  }
                  else if(rem2 == 1 && carry == 1)
                  {
                        lsb = 0;
                        carry = 1;
                  }
                  else if(rem1 == 1 && carry == 1)
                  {
                        lsb = 0;
                        carry = 1;
                  }
                  else if(rem1 == 1 && rem2 == 1)
                  {
                        lsb = 0;
                        carry = 1;
                  }
                  else if(rem1 == 0 && rem2 == 0)
                  {
                        lsb = 0;
                        carry = 0;
                  }
                  else if(rem1 == 1 && rem2 == 0 || rem1 == 0 && rem2 == 1)
                  {
                        lsb = 1; carry = 0;
                  }
                  else
                  {
                        lsb = 0;carry = 0;
                  }

                     // sum = 1
                  E[i++] = lsb;   //  E = 1
                  n = n / 10;
      }
      if(carry == 1)
      {
             A = 1;
             E[i] = A;

      }
      else 
            A = 0;
            

}

