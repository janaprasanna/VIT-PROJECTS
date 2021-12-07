#include<iostream>
using namespace std;

template<class T>
class Matrix
{
        T a[3][3];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
         void operator -(Matrix x);
          void operator *(Matrix x);
};
template<class T>
void Matrix<T>::accept()
{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
template<class T>
void Matrix<T>::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
template<class T>
void Matrix<T>::operator +(Matrix x)
{
        T mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
template<class T>
void Matrix<T>::operator -(Matrix x)
{
        T mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]-x.a[i][j];
                }
        }
        cout<<"\n subraction of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
template<class T>
void Matrix<T>::operator *(Matrix x)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]*x.a[i][j];
                }
        }
        cout<<"\n Multiplication of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix<int> m,n; 
        m.accept();       // Accepting Rows
        n.accept();      // Accepting Columns
        cout<<"\n First Matrix : \n\n";
        m.display();   // Displaying First Matrix
        cout<<"\n Second Matrix : \n\n";
        n.display(); // Displaying Second Matrix
        m+n;        // Addition of Two Matrices. Overloaded '+' Operator
        m-n;      // subraction of two matrices. overloaded '-' operator
        m*n;      // multiplication of two matrices. overloaded '*' operator
        return 0;
}