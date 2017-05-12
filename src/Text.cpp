//
// Created by sami on 12/05/17.
//

#include "Text.hpp"

Text::Text(const std::string &value, const sf::Font &font,
           const sf::Color &color, float PosX, float PosY) : text(value, font)
{
    this->text.setFillColor(color);
    this->text.setPosition(PosX, PosY);
}
