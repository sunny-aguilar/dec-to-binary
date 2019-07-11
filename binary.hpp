/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format. Inclu spaces in between each
**                  ni
**
*********************************************************************/
#ifndef DEC_TO_BINARY_BINARY_HPP
#define DEC_TO_BINARY_BINARY_HPP
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Binary {
private:

public:
    Binary();
    ~Binary();
    void startProgram();
    string convertDecimal(int num);
    bool convertAgain();
    int validateNumber(int min, int max);

};

#endif //DEC_TO_BINARY_BINARY_HPP
