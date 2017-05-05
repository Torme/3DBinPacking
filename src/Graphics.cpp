//
// Created by sami on 10/04/17.
//

#include <iostream>
#include "Graphics.hpp"

void    AShape::drawFrontFace() const
{
    glColor4ub(100, 0, 0, 120);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawLeftFace() const
{
    glColor4ub(100, 0, 0, 120);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawBackFace() const
{
    glColor4ub(100, 0, 0, 120);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
}

void   AShape::drawRightFace() const
{
    glColor4ub(100, 0, 0, 120);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
}

void    AShape::drawTopFace() const
{
    glColor4ub(100, 0, 0, 120); // bas
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawLowFace() const
{
    glColor4ub(100, 100, 0, 120); // haut
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
}

void    AShape::drawShape() const
{
    glBegin(GL_QUADS);

    this->drawRightFace();
    this->drawLeftFace();
    this->drawTopFace();
    this->drawLowFace();
    this->drawFrontFace();
    this->drawBackFace();

    glEnd();
}

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

Box::Box(double X, double Y, double Z) : AShape()
{
    this->_Down_y = -Y;
    this->_Down_x = -X;
    this->_Down_z = -Z;

    this->_Up_x = X;
    this->_Up_y = Y;
    this->_Up_z = Z;
}