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
        static const unsigned int     WindowX = 1920;
        static const unsigned int     WindowY = 1080;

        static const unsigned int     EquartTextCadre = 20;
        static const unsigned int     EquartBoxCadre = 10;
        static const unsigned int     LongueurBoxCadre = 100;
        static const unsigned int     HauteurBoxCadre = 40;

        static const unsigned int     BoxPosX = 50;
        static const unsigned int     BoxPosy = 50;

        static const unsigned int     BoxXPosx = BoxPosX;
        static const unsigned int     BoxXPosy = BoxPosy + BoxPosy;

        static const unsigned int     BoxYPosx = BoxPosX;
        static const unsigned int     BoxYPosy = BoxXPosy + BoxPosy;

        static const unsigned int     BoxZPosx = BoxPosX;
        static const unsigned int     BoxZPosy = BoxYPosy + BoxPosy;

        static const unsigned int     ItemPosX = BoxPosX * 7;
        static const unsigned int     ItemPosY = BoxPosy;

        static const unsigned int     CoordPosX = ItemPosX;
        static const unsigned int     CoordPosY = ItemPosY;

        static const unsigned int     AddPosX = BoxPosX;
        static const unsigned int     AddPosY = BoxZPosy + BoxPosy;

        static const unsigned int     AddPlusX = AddPosX + 190;
        static const unsigned int     AddPlusY = BoxZPosy + BoxPosy;

        static const unsigned int     AddMoinsX = AddPlusX + 55;
        static const unsigned int     AddMoinsY = BoxZPosy + BoxPosy;

        static const unsigned int     AddCoXX = BoxPosX;
        static const unsigned int     AddCoXY = AddPosY + BoxPosy;

        static const unsigned int     AddCoYX = BoxPosX;
        static const unsigned int     AddCoYY = AddCoXY + BoxPosy;

        static const unsigned int     AddCoZX = BoxPosX;
        static const unsigned int     AddCoZY = AddCoYY + BoxPosy;

        static const unsigned int     AddPaXX = BoxPosX;
        static const unsigned int     AddPaXY = AddCoZY + BoxPosy;

        static const unsigned int     AddPaYX = BoxPosX;
        static const unsigned int     AddPaYY = AddPaXY + BoxPosy;

        static const unsigned int     AddPaZX = BoxPosX;
        static const unsigned int     AddPaZY = AddPaYY + BoxPosy;

        static const unsigned int     FileX = BoxPosX;
        static const unsigned int     FileY = AddPaZY + BoxPosy;

        static const unsigned int     CadreBoxRight = BoxPosX - EquartTextCadre;
        static const unsigned int     CadreBoxleft = ItemPosX - EquartTextCadre;
        static const unsigned int     CadreBoxHaut = BoxPosy;
        static const unsigned int     CadreBoxBas = BoxZPosy + BoxPosX;

        static const unsigned int     CadreItemsRight = ItemPosX - EquartTextCadre;
        static const unsigned int     CadreItemsLeft = WindowX - EquartTextCadre;
        static const unsigned int     CadreItemsUp = ItemPosY;
        static const unsigned int     CadreItemsDown = WindowY - EquartTextCadre;

        static const unsigned int     CadreAddRight = CadreBoxRight;
        static const unsigned int     CadreAddLeft = CadreBoxleft;
        static const unsigned int     CadreAddUp = CadreBoxBas;
        static const unsigned int     CadreAddDown = AddPaZY + BoxPosy;

        static const unsigned int     CadreFileRight = CadreBoxRight;
        static const unsigned int     CadreFileLeft = CadreBoxleft;
        static const unsigned int     CadreFileUp = CadreAddDown;
        static const unsigned int     CadreFileDown = WindowY - EquartTextCadre;

        static const unsigned int   CadreBoxDataXRight = CadreBoxleft - (BoxXPosx * 2) - EquartBoxCadre;
        static const unsigned int   CadreBoxDataXLeft = CadreBoxDataXRight + LongueurBoxCadre;
        static const unsigned int   CadreBoxDataXUp = BoxXPosy;
        static const unsigned int   CadreBoxDataXDown = CadreBoxDataXUp + HauteurBoxCadre;

        static const unsigned int   CadreBoxDataYRight = CadreBoxDataXRight;
        static const unsigned int   CadreBoxDataYLeft = CadreBoxDataXLeft;
        static const unsigned int   CadreBoxDataYUp = CadreBoxDataXDown + EquartBoxCadre;
        static const unsigned int   CadreBoxDataYDown = CadreBoxDataYUp + HauteurBoxCadre;

        static const unsigned int   CadreBoxDataZRight = CadreBoxDataXRight;
        static const unsigned int   CadreBoxDataZLeft = CadreBoxDataXLeft;
        static const unsigned int   CadreBoxDataZUp = CadreBoxDataYDown + EquartBoxCadre;
        static const unsigned int   CadreBoxDataZDown = CadreBoxDataZUp + HauteurBoxCadre;

        static const unsigned int   CadreAddPlusRight = CadreBoxDataXRight;
        static const unsigned int   CadreAddPlusLeft = CadreAddPlusRight + (LongueurBoxCadre / 2) - (EquartBoxCadre / 2);
        static const unsigned int   CadreAddPlusUp = AddPosY + EquartBoxCadre;
        static const unsigned int   CadreAddPlusDown = CadreAddPlusUp + HauteurBoxCadre - EquartBoxCadre;

        static const unsigned int   CadreAddMoinsRight = CadreAddPlusLeft + EquartBoxCadre;
        static const unsigned int   CadreAddMoinsLeft = CadreBoxDataXLeft;
        static const unsigned int   CadreAddMoinsUp = CadreAddPlusUp;
        static const unsigned int   CadreAddMoinsDown = CadreAddPlusDown;

        static const unsigned int   CadreItemDataCoordXRight = CadreBoxleft - (AddCoXX * 2) - EquartBoxCadre;
        static const unsigned int   CadreItemDataCoordXLeft = CadreItemDataCoordXRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataCoordXUp = AddCoXY;
        static const unsigned int   CadreItemDataCoordXDown = CadreItemDataCoordXUp + HauteurBoxCadre;

        static const unsigned int   CadreItemDataCoordYRight = CadreItemDataCoordXRight;
        static const unsigned int   CadreItemDataCoordYLeft = CadreItemDataCoordYRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataCoordYUp = CadreItemDataCoordXDown + EquartBoxCadre;
        static const unsigned int   CadreItemDataCoordYDown = CadreItemDataCoordYUp + HauteurBoxCadre;

        static const unsigned int   CadreItemDataCoordZRight = CadreItemDataCoordXRight;
        static const unsigned int   CadreItemDataCoordZLeft = CadreItemDataCoordZRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataCoordZUp = CadreItemDataCoordYDown + EquartBoxCadre;
        static const unsigned int   CadreItemDataCoordZDown = CadreItemDataCoordZUp + HauteurBoxCadre;

        static const unsigned int   CadreItemDataPackXRight = CadreItemDataCoordXRight;
        static const unsigned int   CadreItemDataPackXLeft = CadreItemDataPackXRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataPackXUp = CadreItemDataCoordZDown + EquartBoxCadre;
        static const unsigned int   CadreItemDataPackXDown = CadreItemDataPackXUp + HauteurBoxCadre;

        static const unsigned int   CadreItemDataPackYRight = CadreItemDataCoordXRight;
        static const unsigned int   CadreItemDataPackYLeft = CadreItemDataPackYRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataPackYUp = CadreItemDataPackXDown + EquartBoxCadre;
        static const unsigned int   CadreItemDataPackYDown = CadreItemDataPackYUp + HauteurBoxCadre;

        static const unsigned int   CadreItemDataPackZRight = CadreItemDataCoordXRight;
        static const unsigned int   CadreItemDataPackZLeft = CadreItemDataPackZRight + LongueurBoxCadre;
        static const unsigned int   CadreItemDataPackZUp = CadreItemDataPackYDown + EquartBoxCadre;
        static const unsigned int   CadreItemDataPackZDown = CadreItemDataPackZUp + HauteurBoxCadre;
    }

    namespace   Visual
    {
        static float      RotateX = 0;
        static float      RotateY = 1.f;
        static float      RotateZ = 0;
    }
}

#endif //INC_3DBINPACKING_GRAPHICS_HPP
