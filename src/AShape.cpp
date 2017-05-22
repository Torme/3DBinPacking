//
// Created by sami on 10/04/17.
//

#include "AShape.hpp"
#include "Graphics.hpp"

void    AShape::drawFrontFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawLeftFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawBackFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
}

void   AShape::drawRightFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
}

void    AShape::drawTopFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t); // bas
    glVertex3d(this->_Up_x, this->_Up_y, this->_Up_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Up_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Up_z);
}

void    AShape::drawLowFace(float r, float g, float b, float t) const
{
    glColor4ub(r, g, b, t); // haut
    glVertex3d(this->_Up_x, this->_Up_y, this->_Down_z);
    glVertex3d(this->_Up_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Down_y, this->_Down_z);
    glVertex3d(this->_Down_x, this->_Up_y, this->_Down_z);
}

void    AShape::drawShape(float r, float g, float b, float t) const
{
    glBegin(GL_QUADS);

    this->drawRightFace(r, g, b, t);
    this->drawLeftFace(r, g, b, t);
    this->drawTopFace(r, g, b, t);
    this->drawLowFace(r, g, b, t);
    this->drawFrontFace(r, g, b, t);
    this->drawBackFace(r, g, b, t);

    glEnd();
}
