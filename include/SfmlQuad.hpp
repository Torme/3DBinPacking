//
// Created by sami on 16/05/17.
//

#ifndef INC_3DBINPACKING_SFMLQUAD_HPP
#define INC_3DBINPACKING_SFMLQUAD_HPP

#include <SFML/Graphics.hpp>
#include "Graphics.hpp"

class   SfmlQuad
{
public:
    SfmlQuad();
    ~SfmlQuad() {}
    SfmlQuad(const SfmlQuad & other) = delete;
    SfmlQuad & operator=(const SfmlQuad & other) {}

public:
    void    Init(float Right, float Left, float Up, float Down, sf::Color color);

public:
    sf::VertexArray & GetShape() { return this->Shape; }
    void    ChangeColor(sf::Color color);

private:
    sf::VertexArray  Shape;
};

#endif //INC_3DBINPACKING_SFMLQUAD_HPP
