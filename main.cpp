/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format.
**
**
*********************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// function prototypes
string convertDecimal(int num);

int main() {
    int number = 0;
    string binaryString = "";

    cout << "Number: " << number << endl;

    cout << "This program will convert your decimal number " << endl;
    cout << "into a binary number." << endl;
    cout << "Enter a number between 1 - 100." << endl;
    cout << ">> ";
    cin >> number;

    cout << "You entered the number " << number << "." << endl;

    convertDecimal(number);

    return 0;
}


string convertDecimal(int num) {
    int binNumber = num;
    int quotient = -1;
    int remainder = 0;
    string binString = "";

    while (quotient != 0) {
        quotient = binNumber / 2;
        remainder = binNumber % 2;

        if (remainder > 0) {
            cout << "reached\n";
            binNumber
        }

        binNumber = quotient;

        quotient = 0;
    }

    return nullptr;
}