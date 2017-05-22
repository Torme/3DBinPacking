//
// Created by sami on 13/05/17.
//

#ifndef INC_3DBINPACKING_SCENEMANAGER_HPP
#define INC_3DBINPACKING_SCENEMANAGER_HPP

#include <map>
#include "AScene.hpp"

enum    PlaceScene
{
    GUI = 1,
    REPRESENTATION = 2
};

class       SceneManager
{
public:
    SceneManager(sf::RenderWindow & win) : win(win) {}
    ~SceneManager() {}
    SceneManager(const SceneManager &other) = delete;
    const SceneManager &operator=(const SceneManager &other) = delete;

public:
    void    Init(std::vector<std::array<float, 6>> &thing, std::array<float, 3> &box);
    void    Launch();

private:
    std::map<unsigned int, AScene *>      SceneAll;
    sf::RenderWindow    &win;
};

#endif //INC_3DBINPACKING_SCENEMANAGER_HPP
