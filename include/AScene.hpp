//
// Created by sami on 11/05/17.
//

#ifndef INC_3DBINPACKING_ASCENE_HPP
#define INC_3DBINPACKING_ASCENE_HPP

#include <SFML/Graphics.hpp>

class   AScene
{
public:
    AScene(sf::RenderWindow & win, std::vector<std::array<float, 6>> &thing,
           std::array<float, 3> &box) : Window(win), Event(), ThingData(thing), BoxData(box) {}

public:
    virtual void    InitScene() = 0;
    virtual int     SceneEvent() = 0;
    virtual void    DrawScene() = 0;

    // Graphique
protected:
    sf::RenderWindow & Window;
    sf::Event Event;

    // Data
protected:
    std::vector<std::array<float, 6>>   &ThingData;
    std::array<float, 3>                &BoxData;
};

#endif //INC_3DBINPACKING_ASCENE_HPP
