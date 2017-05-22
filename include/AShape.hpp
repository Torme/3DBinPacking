//
// Created by sami on 09/05/17.
//

#ifndef INC_3DBINPACKING_ASHAPE_HPP
#define INC_3DBINPACKING_ASHAPE_HPP

class       AShape
{
public:
    AShape() : _Down_x(0), _Down_y(0), _Down_z(0), _Up_x(0), _Up_y(0), _Up_z(0) {}
    virtual ~AShape() {}

public:
    virtual void    drawTopFace(float r, float g, float b, float t) const;
    virtual void    drawLowFace(float r, float g, float b, float t) const;
    virtual void    drawBackFace(float r, float g, float b, float t) const;
    virtual void    drawFrontFace(float r, float g, float b, float t) const;
    virtual void    drawLeftFace(float r, float g, float b, float t) const;
    virtual void    drawRightFace(float r, float g, float b, float t) const;

    virtual void    drawShape(float r, float g, float b, float t) const;

protected:
    double  _Down_x;
    double  _Down_y;
    double  _Down_z;
    double  _Up_x;
    double  _Up_y;
    double  _Up_z;
};

#endif //INC_3DBINPACKING_ASHAPE_HPP
