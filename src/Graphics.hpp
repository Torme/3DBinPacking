//
// Created by sami on 10/04/17.
//

#ifndef INC_3DBINPACKING_GRAPHICS_HPP
#define INC_3DBINPACKING_GRAPHICS_HPP

#include <SFML/OpenGL.hpp>

namespace   Graphics
{
    static const unsigned int        WindowX = 1920;
    static const unsigned int        WindowY = 1080;

    //static const int ;
    static float      RotateX = 0;
    static float      RotateY = 1.f;
    static float      RotateZ = 0;
}

class       AShape
{
public:
    AShape() : _Down_x(0), _Down_y(0), _Down_z(0), _Up_x(0), _Up_y(0), _Up_z(0) {}
    virtual ~AShape() {}

public: // getteur
    const double    getPosX() const { return this->_Down_x; }
    const double    getPosY() const { return this->_Down_y; }
    const double    getPosZ() const { return this->_Down_z; }

public: // setteur
    void    setPosX(double val) { this->_Down_x = val; }
    void    setPosY(double val) { this->_Down_y = val; }
    void    setPosZ(double val) { this->_Down_z = val; }

public: // draw
    virtual void    drawTopFace() const;
    virtual void    drawLowFace() const;
    virtual void    drawBackFace() const;
    virtual void    drawFrontFace() const;
    virtual void    drawLeftFace() const;
    virtual void    drawRightFace() const;

    virtual void    drawShape() const;

protected:
    double  _Down_x;
    double  _Down_y;
    double  _Down_z;
    double  _Up_x;
    double  _Up_y;
    double  _Up_z;
};

// objet
class       Things : public AShape
{
public:
    Things(double CoordX, double CoordY, double CoordZ,
           double PackX, double PackY, double PackZ,
           double BoxX, double BoxY, double BoxZ);
    virtual ~Things() {}

public:

private:

};

// carton
class       Box : public AShape
{
public:
    Box(double X, double Y, double Z);
    virtual ~Box() {}

public:

private:
};

#endif //INC_3DBINPACKING_GRAPHICS_HPP
