//
// Created by sami on 12/05/17.
//

#include <SFML/Graphics.hpp>
#include "Text.hpp"
#include "Graphics.hpp"
#include "Gui.hpp"

void    Gui::InitScene()
{
    sf::Font    Font;

    if (!Font.loadFromFile(Graphics::Ressources::Font))
        throw "file not found";

    Text    Box("Box", Font, sf::Color(255, 255, 255, 150), Graphics::Gui::WindowX / 5, Graphics::Gui::WindowY / 2);
}

int     Gui::SceneEvent()
{

}

void    Gui::DrawScene()
{

}