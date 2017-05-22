//
// Created by sami on 12/05/17.
//

#ifndef INC_3DBINPACKING_TEXT_HPP
#define INC_3DBINPACKING_TEXT_HPP

#include <SFML/Graphics.hpp>

class   Text
{
public:
    Text() : text() {}
    ~Text() {}
    Text(const Text &other) : text(other.GetText()) {}
    const Text &operator=(const Text &other);

public:
    void    SetText(const std::string &value, const sf::Font & font,
                    const sf::Color & color, float PosX, float PosY);

public:
    const sf::Text & GetText() const { return this->text; }
    sf::Text & GetText() { return this->text; }

private:
    sf::Text    text;
};

#endif //INC_3DBINPACKING_TEXT_HPP
