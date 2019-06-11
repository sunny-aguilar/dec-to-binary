/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format.
**
**
*********************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// function prototypes

int main() {
    int number = 0;

    cout << "This program will convert your decimal number " << endl;
    cout << "into a binary number." << endl;
    cout << "Enter a number between 1 - 100." << endl;
    cout << ">> ";
    cin >> number;

    cout << "You entered the number " << number << "." << endl;

    return 0;
}