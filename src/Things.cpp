//
// Created by sami on 09/05/17.
//

#include "Things.hpp"

Things::Things(double CoordX, double CoordY, double CoordZ,
               double PackX, double PackY, double PackZ,
               double BoxX, double BoxY, double BoxZ) : AShape()
{
    this->_Down_x = -BoxX + (CoordX * 2);
    this->_Down_y = -BoxY + (CoordY * 2);
    this->_Down_z = -BoxZ + (CoordZ * 2);

    this->_Up_z = (this->_Down_z + (PackZ * 2));
    this->_Up_y = (this->_Down_y + (PackY * 2));
    this->_Up_x = (this->_Down_x + (PackX * 2));
}
