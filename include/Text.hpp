//
// Created by sami on 12/05/17.
//

#ifndef INC_3DBINPACKING_TEXT_HPP
#define INC_3DBINPACKING_TEXT_HPP

#include <SFML/Graphics.hpp>

class   Text
{
public:
    Text(const std::string &value, const sf::Font & font,
         const sf::Color & color, float PosX, float PosY);
    ~Text() {}
    Text(const Text &other) = delete;
    const Text &operator=(const Text &other) = delete;

public:
    const sf::Text & GetText() { return this->text; }

private:
    sf::Text    text;
};

#endif //INC_3DBINPACKING_TEXT_HPP
