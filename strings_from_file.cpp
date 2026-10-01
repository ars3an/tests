#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream fin;
    fin.open("input.txt");
    if (!fin)
    {
        cout << "File not found" << endl;
    }
    else
    {
        while (fin)
        {
            string str;
            getline(fin, str);
            cout << str;
            if (!str.empty())
            {
                cout << endl;
            }
        }
        fin.close();
    }
}

