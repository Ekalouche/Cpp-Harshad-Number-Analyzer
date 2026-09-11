// LAB2_Harshad_Numbers.cpp

#include <iostream>
#include <fstream>
#include <string>
#include "Module.h"
using namespace std;

int main()
{
    string baseName = GetFilename();

    ifstream inFile(baseName + ".in");
    ofstream outFile(baseName + ".out");

    int number;
    while (inFile >> number)
    {
        if (IsHarshad(number) == 1)
        {
            outFile << number << " is a Harshad number" << endl;
        } // if()
        else
        {
            outFile << number << " is NOT a Harshad number" << endl;
        } // if()
    } // loop()

    return 0;
}