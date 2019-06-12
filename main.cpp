/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format.
**
**
*********************************************************************/
#include "binary.hpp"
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
    Binary bin;
    bin.startProgram();

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
            binString += "1";
        }
        else {
            binString += "0";
        }

        binNumber = quotient;
    }

    if (binString.length() < 4) {
        int addZeros = 4 - binString.length();
        for (int i = 0; i < addZeros; i++) {
            binString = "0" + binString;
        }
    }


    return binString;
}