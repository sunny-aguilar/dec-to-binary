/*********************************************************************
** Author:          Sandro Aguilar
** Date:            June 10, 2019
** Description:     A program that converts decimal integers into
**                  binary format.
**
**
*********************************************************************/

#ifndef DEC_TO_BINARY_BINARY_HPP
#define DEC_TO_BINARY_BINARY_HPP

class Binary {
private:


public:
    Binary();
    ~Binary();
    void startProgram();
    bool goAgain();
    int validateNumber(int min, int max);

};

#endif //DEC_TO_BINARY_BINARY_HPP
