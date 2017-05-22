//
// Created by sami on 09/05/17.
//

#ifndef INC_3DBINPACKING_THINGS_HPP
#define INC_3DBINPACKING_THINGS_HPP

#include "AShape.hpp"

class       Things : public AShape
{
public:
    Things() {}
    Things(double CoordX, double CoordY, double CoordZ,
           double PackX, double PackY, double PackZ,
           double BoxX, double BoxY, double BoxZ);
    virtual ~Things() {}

public:
    void    InitThings(double CoordX, double CoordY, double CoordZ,
                       double PackX, double PackY, double PackZ,
                       double BoxX, double BoxY, double BoxZ);

private:

};

#endif //INC_3DBINPACKING_THINGS_HPP
