//
// Created by sami on 14/05/17.
//

#include "SceneManager.hpp"
#include "Gui.hpp"
#include "Representation.hpp"

void    SceneManager::Init(std::vector<std::array<float, 6>> &thing,
                           std::array<float, 3> &box)
{
    this->SceneAll[PlaceScene::GUI] = new Gui(win, thing, box);
    this->SceneAll[PlaceScene::REPRESENTATION] = new Representation(win, thing, box);

    this->SceneAll[PlaceScene::GUI]->InitScene();
    this->SceneAll[PlaceScene::REPRESENTATION]->InitScene();
}

void    SceneManager::Launch()
{
    int Key = PlaceScene::GUI;

    for (;;)
    {
        if ((Key = this->SceneAll[Key]->SceneEvent()) == -1)
            break;
        this->win.clear();
        this->SceneAll[Key]->DrawScene();
        this->win.display();
    }
}