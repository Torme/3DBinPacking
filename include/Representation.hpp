//
// Created by sami on 11/05/17.
//

#ifndef INC_3DBINPACKING_REPRESENTATION_HPP
# define INC_3DBINPACKING_REPRESENTATION_HPP

#include <vector>
#include "AScene.hpp"
#include "Box.hpp"
#include "Things.hpp"

class   Representation : public AScene
{
public:
    Representation(sf::RenderWindow & win, std::vector<std::array<float, 6>> &thing,
                   std::array<float, 3> &box) : AScene(win, thing, box), box(), things() {}
    ~Representation() {}
    const Representation &operator=(const Representation &other) = delete;
    Representation(const Representation &other) = delete;

public:
    virtual void    InitScene();
    virtual int     SceneEvent();
    virtual void    DrawScene();

private:
    sf::Clock               Clock;

private:
    Box                     box;
    std::vector<Things>     things;
};

#endif //INC_3DBINPACKING_REPRESENTATION_HPP
