/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format.
**
**
*********************************************************************/
#include "binary.hpp"


/*********************************************************************
** Description:     default constructor
*********************************************************************/
Binary::Binary() {};

/*********************************************************************
** Description:     destructor
*********************************************************************/
Binary::~Binary() {}


void Binary::startProgram() {
    bool goAgain = true;
    int number = 0;
    string binaryString = "";

    while (goAgain) {
        cout << "This program will convert your decimal number " << endl;
        cout << "into a binary number." << endl;
        cout << "Enter a number between 1 - 100." << endl;
        cout << ">> ";
        cin >> number;

        cout << "You entered the number " << number << "." << endl;

        binaryString = convertDecimal(number);

        cout << "\nBinary value is: " << binaryString << endl << endl;

        goAgain = convertAgain();
    }


}

string Binary::convertDecimal(int num) {
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

bool Binary::convertAgain() {
    cout << "Would you like to enter a new decimal number?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << ">> ";

    int select = validateNumber(1,2);

    switch (select) {
        case 1:
            return true;
            break;
        case 2:
            return false;
            break;
        default:
            cout << "Unable to select a choice" << endl;
    }

    return false;
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