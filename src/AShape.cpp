//
// Created by sami on 10/04/17.
//

#include "AShape.hpp"
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
