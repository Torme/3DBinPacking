//
// Created by sami on 11/05/17.
//

#ifndef INC_3DBINPACKING_ASCENE_HPP
#define INC_3DBINPACKING_ASCENE_HPP

#include <SFML/Window.hpp>

class   AScene
{
public:
    AScene(sf::Window & win) : Window(win), Event() {}

public:
    virtual void    InitScene() = 0;
    virtual int     SceneEvent() = 0;
    virtual void    DrawScene() = 0;

private:
    const sf::Window & Window;
    sf::Event Event;
};

#endif //INC_3DBINPACKING_ASCENE_HPP
