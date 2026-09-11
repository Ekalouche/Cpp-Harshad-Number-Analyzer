// Harshad.cpp

#include <iostream>
#include <fstream>

using namespace std;

string GetFilename()
{
    string baseName;

    while (true)
    {
        cout << "Enter file name: ";
        cin >> baseName;

        ifstream inFile(baseName + ".in");
        if (inFile.is_open())
        {
            return baseName;
        }
        else
        {
            cout << "File does not exist, try again." << endl;
        }
    }
}

int IsHarshad(int value)
{
    int sum = 0;
    int temp = value;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (value % sum == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}