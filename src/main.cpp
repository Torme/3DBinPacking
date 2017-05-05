//
// Created by sami on 10/04/17.
//

#include <fstream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glu.h>
#include <iostream>
#include "visudat_parser.hpp"
#include "Graphics.hpp"

int main(int ac, char **av)
{
    std::ifstream		input;
    std::vector<float>	datas;

    if (ac < 2)
    {
        std::cerr << "Provide file" << std::endl;
        return (-1);
    }

    input.open(av[1]);
    if (!input.is_open())
    {
        std::cerr << "Could not open file" << std::endl;
        return (-1);
    }

    parse_file(input, datas);

    print_datas(datas);

    sf::Window window(sf::VideoMode(Graphics::WindowX, Graphics::WindowY), "3d bin packing", sf::Style::Fullscreen, sf::ContextSettings(64));
    window.setVerticalSyncEnabled(true);

    Box  box(104, 96, 84);

    Things one(0, 0, 0, 104, 70, 24, 104, 96, 84);
    Things two(0, 0, 24, 104, 70, 24, 104, 96, 84);
    Things three(0, 0, 48, 104, 70, 24, 104, 96, 84);
    Things four(0, 70, 0, 104, 14, 48, 104, 96, 84);

    sf::Clock clock;
    window.setActive(true);
    bool run = true;
    while (run)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed :
                {
                    run = false;
                    break ;
                }
                case sf::Event::Resized :
                {
                    glViewport(0, 0, event.size.width, event.size.height);
                    break ;
                }
                case sf::Event::KeyPressed :
                {
                    switch (event.key.code)
                    {
                        case sf::Keyboard::Escape :
                        {
                            run = false;
                            break ;
                        }
                        case sf::Keyboard::Up :
                        {
                            Graphics::RotateZ = 0.5;
                            break ;
                        }
                        case sf::Keyboard::Space :
                        {
                            Graphics::RotateY = 0.f;
                            break ;
                        }
                        default:
                            break ;
                    }
                    break ;
                }
                default:
                    break ;
            }
        }

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

        // faut dessiner ici
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

        gluPerspective(70, Graphics::WindowX/Graphics::WindowY, 1, 1000);
        gluLookAt(240, 100, 360, 0, 0, 0, 0, 1, 0);

        glRotatef(clock.getElapsedTime().asSeconds() * 10.f, Graphics::RotateX, Graphics::RotateY, Graphics::RotateZ);

        box.drawShape();
        one.drawShape();
        two.drawShape();
        three.drawShape();
        four.drawShape();

        window.display();
    }
    return 0;
}