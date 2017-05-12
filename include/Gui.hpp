//
// Created by sami on 11/05/17.
//

#ifndef INC_3DBINPACKING_GUI_HPP
#define INC_3DBINPACKING_GUI_HPP

#include "AScene.hpp"

class   Gui : public AScene
{
public:
    Gui(sf::Window & win) : AScene(win) {}
    ~Gui() {}
    Gui(const Gui & other) = delete;
    const Gui &operator=(const Gui & other) = delete;

public:
    virtual void    InitScene();
    virtual int     SceneEvent();
    virtual void    DrawScene();

private:
};

#endif //INC_3DBINPACKING_GUI_HPP
