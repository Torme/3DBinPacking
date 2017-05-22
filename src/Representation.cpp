//
// Created by sami on 13/05/17.
//

#include <SFML/OpenGL.hpp>
#include <GL/glu.h>
#include <iostream>
#include "Graphics.hpp"
#include "Representation.hpp"

void    Representation::InitScene()
{
    Things  tmp;

    this->things.clear();

    this->box.InitBox(this->BoxData[0], this->BoxData[1], BoxData[2]);
    for (unsigned int i = 0 ; i < this->ThingData.size() ; i++ )
    {
        tmp.InitThings(this->ThingData[i][0], this->ThingData[i][1], this->ThingData[i][2],
                         this->ThingData[i][3], this->ThingData[i][4], this->ThingData[i][5],
                         this->BoxData[0], this->BoxData[1], this->BoxData[2]);
        this->things.push_back(tmp);
    }
}

void    Representation::DrawScene()
{
    this->Window.setActive(true);
    this->InitScene();

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(70, Graphics::Gui::WindowX/Graphics::Gui::WindowY, 1, 1000);
    gluLookAt(0, 0, 500, 0, 0, 0, 0, 1, 0);

    glRotatef(this->Clock.getElapsedTime().asSeconds() * 10.f, Graphics::Visual::RotateX,
              Graphics::Visual::RotateY, Graphics::Visual::RotateZ);

    this->box.drawShape(0, 0, 200, 50);
    for (unsigned int i = 0 ; i < this->things.size() ; i++)
    {
        this->things[i].drawShape(100, 100, 0, 50);
    }
    this->Window.setActive(false);
}

int     Representation::SceneEvent()
{
    while (this->Window.pollEvent(this->Event))
    {
        switch (this->Event.type)
        {
            case sf::Event::Closed:
            {
                this->Window.close();
                return -1;
            }
            case sf::Event::KeyPressed:
            {
                switch (this->Event.key.code)
                {
                    case sf::Keyboard::Escape:
                    {
                        this->Window.resetGLStates();
                        return 1;
                    }
                    case sf::Keyboard::Return:
                    {
                        this->Window.resetGLStates();
                        return 1;
                    }
                    default:
                        break;
                }
            }
            default:
                break;
        }
    }
    return 2;
}