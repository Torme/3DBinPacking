//
// Created by sami on 09/05/17.
//

#ifndef INC_3DBINPACKING_BOX_HPP
#define INC_3DBINPACKING_BOX_HPP

#include "AShape.hpp"

class       Box : public AShape
{
public:
    Box(double X, double Y, double Z);
    virtual ~Box() {}

public:

private:
};

#endif //INC_3DBINPACKING_BOX_HPP
