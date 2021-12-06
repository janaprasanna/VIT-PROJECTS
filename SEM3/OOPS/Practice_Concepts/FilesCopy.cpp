// copy from XYZ to ABC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("xyz.txt");
    fout.open("ABC.txt");

    if (!fin || !fout)
    {
        cout << "\n Error either one of the file is not available ! " << endl;
        return -1;
    }

    char ch;
    while (!fin.eof())
    {
        fin.get(ch);
        fout << ch;
    }
    cout << "\nWorking";
    fin.close();
    fout.close();
}