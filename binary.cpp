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
using std::cin;
using std::cout;
using std::endl;
using std::string;

/*********************************************************************
** Description:     default constructor
*********************************************************************/
Binary::Binary() {};

/*********************************************************************
** Description:     destructor
*********************************************************************/
Binary::~Binary() {}


void Binary::startProgram() {
    int number = 0;
    string binaryString = "";


}

bool Binary::goAgain() {
    cout << "Would you like to enter a new decimal number?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << ">> ";

    int select =

    return true;
}

int Binary::validateNumber(int min, int max) {

}