//
// Created by sami on 16/05/17.
//

#include "SfmlQuad.hpp"

SfmlQuad::SfmlQuad() : Shape(sf::LineStrip, 5)
{}

void SfmlQuad::Init(float Right, float Left, float Up, float Down, sf::Color color)
{
    // Haut Gauche
    this->Shape[0] = sf::Vertex(sf::Vector2f(Right, Up), color);
    // Haut Droite
    this->Shape[1] = sf::Vertex(sf::Vector2f(Left, Up), color);
    // Bas Droite
    this->Shape[2] = sf::Vertex(sf::Vector2f(Left, Down), color);
    // bas Gauche
    this->Shape[3] = sf::Vertex(sf::Vector2f(Right, Down), color);
    //
    this->Shape[4] = sf::Vertex(sf::Vector2f(Right, Up), color);
}

void SfmlQuad::ChangeColor(sf::Color color)
{
    this->Shape[0].color = color;
    this->Shape[1].color = color;
    this->Shape[2].color = color;
    this->Shape[3].color = color;
    this->Shape[4].color = color;
}