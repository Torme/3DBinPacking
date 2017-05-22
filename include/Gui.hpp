//
// Created by sami on 11/05/17.
//

#ifndef INC_3DBINPACKING_GUI_HPP
#define INC_3DBINPACKING_GUI_HPP

#include <sstream>
#include <array>
#include "SfmlQuad.hpp"
#include "Text.hpp"
#include "AScene.hpp"

enum    Stream
{
    Box_X = 0,
    Box_Y,
    Box_Z,
    Add,
    Del,
    Coord_X,
    Coord_Y,
    Coord_Z,
    Pack_X,
    Pack_Y,
    Pack_Z,
};

class   Gui : public AScene
{
public:
    Gui(sf::RenderWindow & win, std::vector<std::array<float, 6>> &thing, std::array<float, 3> &box)
            : AScene(win, thing, box), CaseSelect(0) {}
    ~Gui() {}
    Gui(const Gui & other) = delete;
    const Gui &operator=(const Gui & other) = delete;

public:
    virtual void    InitScene();
    virtual int     SceneEvent();
    virtual void    DrawScene();

private:
    void    InitText();
    void    InitLines();
    void    InitStream();

    void    SetNewData();
    void    SetThings();

private:
    sf::Font        Font;
    unsigned int    CaseSelect;
    int             Ret;

private:
    Text        Box;
    Text        Add;
    Text        Items;
    Text        File;

    std::vector<Text>   ListItems;
    std::array<Text, 11> ArrayDataName;
    std::array<Text, 11> ArrayData;

private:
    std::array<std::stringstream, 11> ArrayStream;

private:
    SfmlQuad    BoxQuad;
    SfmlQuad    ItemQuad;
    SfmlQuad    AddQuad;
    SfmlQuad    FileQuad;

    std::array<SfmlQuad, 11>  ArrayQuad;
};

#endif //INC_3DBINPACKING_GUI_HPP
