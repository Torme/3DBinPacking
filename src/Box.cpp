//
// Created by sami on 09/05/17.
//

#include "Box.hpp"

Box::Box(double X, double Y, double Z) : AShape()
{
    this->InitBox(X, Y, Z);
}

void Box::InitBox(double X, double Y, double Z)
{
    this->_Down_y = -Y;
    this->_Down_x = -X;
    this->_Down_z = -Z;

    this->_Up_x = X;
    this->_Up_y = Y;
    this->_Up_z = Z;
}