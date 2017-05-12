//
// Created by sami on 10/04/17.
//

#ifndef INC_3DBINPACKING_GRAPHICS_HPP
#define INC_3DBINPACKING_GRAPHICS_HPP

#include <SFML/OpenGL.hpp>
#include <vector>
#include <array>

namespace   Graphics
{
    namespace Ressources
    {
        const std::string   Directory = "./ressource/";

        const std::string   Font = Directory + "sansation.ttf";
    }

    namespace   Datas
    {
        static const unsigned int       NbDatasBox = 3;
        static std::array<float, 3>     BoxData;

        static const unsigned int                   NbDatasThings = 6;
        static std::vector<std::array<float, 6>>    ThingData;
    }

    namespace   Gui
    {
        static const unsigned int        WindowX = 1920;
        static const unsigned int        WindowY = 1080;
    }

    namespace   Visual
    {
        static const unsigned int        WindowX = 800;
        static const unsigned int        WindowY = 600;

        static float      RotateX = 0;
        static float      RotateY = 1.f;
        static float      RotateZ = 0;
    }
}

#endif //INC_3DBINPACKING_GRAPHICS_HPP
