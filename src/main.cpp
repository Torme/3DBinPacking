//
// Created by sami on 10/04/17.
//

#include <fstream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glu.h>
#include <iostream>
#include <Gui.hpp>
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

        sf::Window window(sf::VideoMode(Graphics::Gui::WindowX, Graphics::Gui::WindowY),
                          "3d bin packing", sf::Style::Fullscreen, sf::ContextSettings(24));
        window.setVerticalSyncEnabled(true);

        Gui gui(window);

        gui.InitScene();

        int err = 0;

        while (err != -1)
        {
            gui.SceneEvent();
            gui.DrawScene();
            window.display();
        }

    }
    catch (...)
    {
        return -1;
    }
    return 0;
}
//    Box  box(104, 96, 84);
//
//    Things one(0, 0, 0, 104, 70, 24, 104, 96, 84);
//    Things two(0, 0, 24, 104, 70, 24, 104, 96, 84);
//    Things three(0, 0, 48, 104, 70, 24, 104, 96, 84);
//    Things four(0, 70, 0, 104, 14, 48, 104, 96, 84);
//
//    sf::Clock clock;
//    window.setActive(true);
//    bool run = true;
//    while (run)
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            switch (event.type)
//            {
//                case sf::Event::Closed :
//                {
//                    run = false;
//                    break ;
//                }
//                case sf::Event::Resized :
//                {
//                    glViewport(0, 0, event.size.width, event.size.height);
//                    break ;
//                }
//                case sf::Event::KeyPressed :
//                {
//                    switch (event.key.code)
//                    {
//                        case sf::Keyboard::Escape :
//                        {
//                            run = false;
//                            break ;
//                        }
//                        case sf::Keyboard::Up :
//                        {
//                            Graphics::Visual::RotateZ = 0.5;
//                            break ;
//                        }
//                        case sf::Keyboard::Space :
//                        {
//                            Graphics::Visual::RotateY = 0.f;
//                            break ;
//                        }
//                        default:
//                            break ;
//                    }
//                    break ;
//                }
//                default:
//                    break ;
//            }
//        }
//
//        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
//
//        // faut dessiner ici
//        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//        glEnable(GL_BLEND);
//        glMatrixMode(GL_PROJECTION);
//        glLoadIdentity();
//
//        gluPerspective(70, Graphics::Gui::WindowX/Graphics::Gui::WindowY, 1, 1000);
//        gluLookAt(240, 100, 360, 0, 0, 0, 0, 1, 0);
//
//        glRotatef(clock.getElapsedTime().asSeconds() * 10.f, Graphics::Visual::RotateX, Graphics::Visual::RotateY, Graphics::Visual::RotateZ);
//
//        box.drawShape();
//        one.drawShape();
//        two.drawShape();
//        three.drawShape();
//        four.drawShape();
//
//        window.display();
//    }
//    return 0;
//}