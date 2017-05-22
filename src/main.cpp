//
// Created by sami on 10/04/17.
//

#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glu.h>
#include <iostream>
#include "Gui.hpp"
#include "Representation.hpp"
#include "SceneManager.hpp"
#include "visudat_parser.hpp"
#include "Graphics.hpp"

int main(int ac, char **av)
{
    try
    {
        VisudatParser Pars;

        if (ac >= 2 && Pars.CheckFile(av[1]))
        {
            std::cout << "un paramettre" << std::endl;
            Pars.ParseData(Graphics::Datas::BoxData, Graphics::Datas::ThingData);
        }

        std::cout << "Apres parsing taille things -> " << Graphics::Datas::ThingData.size() << std::endl;

        sf::RenderWindow window(sf::VideoMode(Graphics::Gui::WindowX, Graphics::Gui::WindowY),
                          "3d bin packing", sf::Style::Default, sf::ContextSettings(24));
        window.setVerticalSyncEnabled(true);

        SceneManager    AllScene(window);

        AllScene.Init(Graphics::Datas::ThingData, Graphics::Datas::BoxData);

        AllScene.Launch();
    }
    catch (...)
    {
        return -1;
    }
    return 0;
}