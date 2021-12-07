#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("xyz.txt");
    if (!fin)
    {
        cout << "\n File Does Not Exist.. " << endl;
        return -1;
    }
    char str[50];
    int count = 0;
    char ch;

    // while (!fin.eof())
    // { // Number of lines
    //     count++;
    //     fin.getline(str, 50);
    //     cout << str << "\n";
    // }

    // while (!fin.eof())
    // { // Number of words
    //     fin.get(ch); // places value of fin char into ch
    //     cout << ch;
    //     count++;
    // }
    int n;
    // while (!fin.eof())
    // {
    //     // No. of integers (requirement: MUST BE INTEGER ONLY FILE)
    //     fin >> n;
    //     cout << n << endl;
    //     count++;
    // }

    // while (!fin.eof())
    // { // count words (till space that is)
    //     fin >> str;
    //     cout << str << endl;
    //     count++;
    // }

    cout << "\n The Count is : " << count << endl;
    fin.close();
}