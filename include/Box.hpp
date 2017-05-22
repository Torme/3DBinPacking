//
// Created by sami on 09/05/17.
//

#ifndef INC_3DBINPACKING_BOX_HPP
#define INC_3DBINPACKING_BOX_HPP

#include "AShape.hpp"

class       Box : public AShape
{
public:
    Box() {}
    Box(double X, double Y, double Z);
    virtual ~Box() {}

public:
    void    InitBox(double X, double Y, double Z);

public:
    float   GetX() { return this->_Up_x; }
    float   GetY() { return this->_Up_y; }
    float   GetZ() { return this->_Up_z; }

private:
};

#endif //INC_3DBINPACKING_BOX_HPP
