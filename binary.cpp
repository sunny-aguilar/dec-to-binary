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
#include <cstring>
#include <sstream>
#include <iomanip>
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

    int select = validateNumber(1,2);

    switch (select) {
        case 1:
            break;
        case 2:
            break;
        default:
            cout << "Unable to select a choice" << endl;
    }

    return ;
}

int Binary::validateNumber(int min, int max) {
    char choice[100];
    int validatedChoice = 0;
    std::stringstream convert;
    bool tooLong = false;
    bool isNotDigit = false;
    bool notInRange = false;

    // determine # of digits in max value acceptable
    long unsigned length = std::to_string(max).length();

    do {
        // store user input
        cin.getline(choice, 100);

        // reject any input that has more than digits than max parameter
        tooLong = false;
        if (strlen(choice) > length) {
            tooLong = true;
            cout << "enter only one number!\n";
        }

        // check if all characters entered are digits
        isNotDigit = false;
        for (unsigned i = 0; i < strlen(choice); i++) {
            // if digit is not a digit, then set it true so that
            // loop will repeat
            if (!isdigit(choice[i])) {
                isNotDigit = true;
            }
        }
        if (isNotDigit) {
            // prompt user to enter only digits
            cout << "enter only digits!\n";
        }

        // check if characters entered are within range
        notInRange = false;
        if (!isNotDigit && !tooLong) {
            convert.clear();
            convert << choice;
            convert >> validatedChoice;

            if (validatedChoice < min || validatedChoice > max) {
                notInRange = true;
                cout << "enter a number between "
                     << min << " or " << max << endl;
            }
        }
    } while (tooLong || isNotDigit || notInRange);

    return validatedChoice;
}