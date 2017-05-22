//
// Created by sami on 12/05/17.
//

#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include "Text.hpp"
#include "Graphics.hpp"
#include "Gui.hpp"

void    Gui::InitScene()
{
    if (!Font.loadFromFile(Graphics::Ressources::Font))
        throw "file not found";

    this->InitStream();
    this->InitText();
    this->InitLines();
}

void    Gui::InitText()
{
    this->Box.SetText("Box", this->Font, sf::Color::White, Graphics::Gui::BoxPosX, Graphics::Gui::BoxPosy);

    this->Items.SetText("Item (CoordX - CoordY - CoordZ - TailleX - TailleY - TailleZ)",
                        this->Font, sf::Color::White, Graphics::Gui::ItemPosX, Graphics::Gui::ItemPosY);

    this->Add.SetText("Add Items", this->Font, sf::Color::White, Graphics::Gui::AddPosX, Graphics::Gui::AddPosY);

    this->File.SetText("Add File", this->Font, sf::Color::White, Graphics::Gui::FileX, Graphics::Gui::FileY);


    this->ArrayDataName[Stream::Box_X].SetText("X", this->Font, sf::Color::White, Graphics::Gui::BoxXPosx, Graphics::Gui::BoxXPosy);
    this->ArrayDataName[Stream::Box_Y].SetText("Y", this->Font, sf::Color::White, Graphics::Gui::BoxYPosx, Graphics::Gui::BoxYPosy);
    this->ArrayDataName[Stream::Box_Z].SetText("Z", this->Font, sf::Color::White, Graphics::Gui::BoxZPosx, Graphics::Gui::BoxZPosy);

    this->ArrayDataName[Stream::Add].SetText("+", this->Font, sf::Color::White, Graphics::Gui::AddPlusX, Graphics::Gui::AddPlusY);
    this->ArrayDataName[Stream::Del].SetText("-", this->Font, sf::Color::White, Graphics::Gui::AddMoinsX, Graphics::Gui::AddMoinsY);

    this->ArrayDataName[Stream::Coord_X].SetText("Coord X", this->Font, sf::Color::White, Graphics::Gui::AddCoXX, Graphics::Gui::AddCoXY);
    this->ArrayDataName[Stream::Coord_Y].SetText("Coord Y", this->Font, sf::Color::White, Graphics::Gui::AddCoYX, Graphics::Gui::AddCoYY);
    this->ArrayDataName[Stream::Coord_Z].SetText("Coord Z", this->Font, sf::Color::White, Graphics::Gui::AddCoZX, Graphics::Gui::AddCoZY);

    this->ArrayDataName[Stream::Pack_X].SetText("Pack X", this->Font, sf::Color::White, Graphics::Gui::AddPaXX, Graphics::Gui::AddPaXY);
    this->ArrayDataName[Stream::Pack_Y].SetText("Pack Y", this->Font, sf::Color::White, Graphics::Gui::AddPaYX, Graphics::Gui::AddPaYY);
    this->ArrayDataName[Stream::Pack_Z].SetText("Pack Z", this->Font, sf::Color::White, Graphics::Gui::AddPaZX, Graphics::Gui::AddPaZY);

    this->ArrayData[Stream::Box_X].SetText(this->ArrayStream[Stream::Box_X].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreBoxDataXRight, Graphics::Gui::CadreBoxDataXUp);
    this->ArrayData[Stream::Box_Y].SetText(this->ArrayStream[Stream::Box_Y].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreBoxDataYRight, Graphics::Gui::CadreBoxDataYUp);
    this->ArrayData[Stream::Box_Z].SetText(this->ArrayStream[Stream::Box_Z].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreBoxDataZRight, Graphics::Gui::CadreBoxDataZUp);
    this->ArrayData[Stream::Add].SetText(this->ArrayStream[Stream::Add].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreAddPlusRight, Graphics::Gui::CadreAddPlusUp);
    this->ArrayData[Stream::Del].SetText(this->ArrayStream[Stream::Del].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreAddMoinsRight, Graphics::Gui::CadreAddMoinsUp);
    this->ArrayData[Stream::Coord_X].SetText(this->ArrayStream[Stream::Coord_X].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataCoordXRight, Graphics::Gui::CadreItemDataCoordXUp);
    this->ArrayData[Stream::Coord_Y].SetText(this->ArrayStream[Stream::Coord_Y].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataCoordYRight, Graphics::Gui::CadreItemDataCoordYUp);
    this->ArrayData[Stream::Coord_Z].SetText(this->ArrayStream[Stream::Coord_Z].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataCoordZRight, Graphics::Gui::CadreItemDataCoordZUp);
    this->ArrayData[Stream::Pack_X].SetText(this->ArrayStream[Stream::Pack_X].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataPackXRight, Graphics::Gui::CadreItemDataPackXUp);
    this->ArrayData[Stream::Pack_Y].SetText(this->ArrayStream[Stream::Pack_Y].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataPackYRight, Graphics::Gui::CadreItemDataPackYUp);
    this->ArrayData[Stream::Pack_Z].SetText(this->ArrayStream[Stream::Pack_Z].str(), this->Font, sf::Color::White,
                                           Graphics::Gui::CadreItemDataPackZRight, Graphics::Gui::CadreItemDataPackZUp);


    Text                tmp;
    std::stringstream   str;
    for (unsigned int i = 0 ; i < this->ThingData.size() ; i++)
    {
        str << "\t";
        for (unsigned int j = 0 ; j < Graphics::Datas::NbDatasThings ; j++)
        {
            str << this->ThingData[i][j] << "\t";
        }
        tmp.SetText(str.str(), this->Font, sf::Color::White, Graphics::Gui::CoordPosX,
                    Graphics::Gui::CoordPosY + (50 * (i + 1)));
        this->ListItems.push_back(tmp);
        str.str("");
    }
}

void    Gui::InitLines()
{
    this->BoxQuad.Init(Graphics::Gui::CadreBoxRight, Graphics::Gui::CadreBoxleft,
                       Graphics::Gui::CadreBoxHaut, Graphics::Gui::CadreBoxBas, sf::Color::White);

    this->ItemQuad.Init(Graphics::Gui::CadreItemsRight, Graphics::Gui::CadreItemsLeft,
                        Graphics::Gui::CadreItemsUp, Graphics::Gui::CadreItemsDown, sf::Color::White);

    this->AddQuad.Init(Graphics::Gui::CadreAddRight, Graphics::Gui::CadreAddLeft,
                        Graphics::Gui::CadreAddUp, Graphics::Gui::CadreAddDown, sf::Color::White);

    this->FileQuad.Init(Graphics::Gui::CadreFileRight, Graphics::Gui::CadreFileLeft,
                        Graphics::Gui::CadreFileUp, Graphics::Gui::CadreFileDown, sf::Color::White);

    this->ArrayQuad[Stream::Box_X].Init(Graphics::Gui::CadreBoxDataXRight, Graphics::Gui::CadreBoxDataXLeft,
                                        Graphics::Gui::CadreBoxDataXUp, Graphics::Gui::CadreBoxDataXDown,
                                        sf::Color::White);
    this->ArrayQuad[Stream::Box_Y].Init(Graphics::Gui::CadreBoxDataYRight, Graphics::Gui::CadreBoxDataYLeft,
                                        Graphics::Gui::CadreBoxDataYUp, Graphics::Gui::CadreBoxDataYDown,
                                        sf::Color::White);
    this->ArrayQuad[Stream::Box_Z].Init(Graphics::Gui::CadreBoxDataZRight, Graphics::Gui::CadreBoxDataZLeft,
                                        Graphics::Gui::CadreBoxDataZUp, Graphics::Gui::CadreBoxDataZDown,
                                        sf::Color::White);
    this->ArrayQuad[Stream::Add].Init(Graphics::Gui::CadreAddPlusRight, Graphics::Gui::CadreAddPlusLeft,
                                        Graphics::Gui::CadreAddPlusUp, Graphics::Gui::CadreAddPlusDown,
                                        sf::Color::White);
    this->ArrayQuad[Stream::Del].Init(Graphics::Gui::CadreAddMoinsRight, Graphics::Gui::CadreAddMoinsLeft,
                                        Graphics::Gui::CadreAddMoinsUp, Graphics::Gui::CadreAddMoinsDown,
                                        sf::Color::White);
    this->ArrayQuad[Stream::Coord_X].Init(Graphics::Gui::CadreItemDataCoordXRight, Graphics::Gui::CadreItemDataCoordXLeft,
                                          Graphics::Gui::CadreItemDataCoordXUp, Graphics::Gui::CadreItemDataCoordXDown,
                                          sf::Color::White);
    this->ArrayQuad[Stream::Coord_Y].Init(Graphics::Gui::CadreItemDataCoordYRight, Graphics::Gui::CadreItemDataCoordYLeft,
                                          Graphics::Gui::CadreItemDataCoordYUp, Graphics::Gui::CadreItemDataCoordYDown,
                                          sf::Color::White);
    this->ArrayQuad[Stream::Coord_Z].Init(Graphics::Gui::CadreItemDataCoordZRight, Graphics::Gui::CadreItemDataCoordZLeft,
                                          Graphics::Gui::CadreItemDataCoordZUp, Graphics::Gui::CadreItemDataCoordZDown,
                                          sf::Color::White);
    this->ArrayQuad[Stream::Pack_X].Init(Graphics::Gui::CadreItemDataPackXRight, Graphics::Gui::CadreItemDataPackXLeft,
                                         Graphics::Gui::CadreItemDataPackXUp, Graphics::Gui::CadreItemDataPackXDown,
                                         sf::Color::White);
    this->ArrayQuad[Stream::Pack_Y].Init(Graphics::Gui::CadreItemDataPackYRight, Graphics::Gui::CadreItemDataPackYLeft,
                                         Graphics::Gui::CadreItemDataPackYUp, Graphics::Gui::CadreItemDataPackYDown,
                                         sf::Color::White);
    this->ArrayQuad[Stream::Pack_Z].Init(Graphics::Gui::CadreItemDataPackZRight, Graphics::Gui::CadreItemDataPackZLeft,
                                         Graphics::Gui::CadreItemDataPackZUp, Graphics::Gui::CadreItemDataPackZDown,
                                         sf::Color::White);
}

void    Gui::InitStream()
{
  for (unsigned int i = 0 ; i <= Stream::Pack_Z; i++)
  {
      if (i < Graphics::Datas::NbDatasBox)
          this->ArrayStream[i] << this->BoxData[i];
      else if (i == Stream::Add || i == Stream::Del)
          i++;
      else
          this->ArrayStream[i] << "0";
  }
}

void    Gui::DrawScene()
{
    this->Window.setActive(false);

    // cadre
    this->Window.draw(this->BoxQuad.GetShape());
    this->Window.draw(this->ItemQuad.GetShape());
    this->Window.draw(this->AddQuad.GetShape());
    this->Window.draw(this->FileQuad.GetShape());

    // Text
    this->Window.draw(this->Box.GetText());
    this->Window.draw(this->Items.GetText());
    this->Window.draw(this->File.GetText());
    this->Window.draw(this->Add.GetText());

    unsigned int i;

    for (i = 0 ; i < 11 ; i++)
    {
        i == this->CaseSelect ? this->ArrayQuad[i].ChangeColor(sf::Color::Green)
                              : this->ArrayQuad[i].ChangeColor(sf::Color::White);
        this->Window.draw(this->ArrayQuad[i].GetShape());
        this->Window.draw(this->ArrayDataName[i].GetText());
        this->Window.draw(this->ArrayData[i].GetText());
    }

    // text items
   // std::cout << "Draw : " << this->ListItems.size() << std::endl;
    for (i = 0 ; i < this->ListItems.size() ; i++)
    {
        this->Window.draw(this->ListItems[i].GetText());
    }
}

void    Gui::SetNewData()
{
    unsigned int i;

    for(i = 0 ; i < (Graphics::Datas::NbDatasBox); i++)
    {
        std::cout << std::stoi(this->ArrayStream[i].str()) << std::endl;
        this->BoxData[i] = std::stoi(this->ArrayStream[i].str());
    }

    this->ThingData.clear();

    std::array<float, 6>    tab_tmp;
    for (i = 0 ; i < this->ListItems.size(); i++)
    {
        std::stringstream   str_tmp;

        int   fl_tmp;
        str_tmp << this->ListItems[i].GetText().getString().toAnsiString();
        for (unsigned int j = 0 ; j < Graphics::Datas::NbDatasThings ; j++)
        {
            str_tmp >> fl_tmp;
            tab_tmp[j] = fl_tmp;
        }
        str_tmp.str("");
        this->ThingData.push_back(tab_tmp);
    }
}

void    Gui::SetThings()
{
    switch (this->CaseSelect)
    {
        case Stream::Add:
        {
            Text    tmp;
            unsigned int i;
            std::stringstream str;

            str << "\t";
            for (i = Stream::Coord_X; i <= Stream::Pack_Z; i++)
            {
                str << this->ArrayStream[i].str() << "\t";
            }
            tmp.SetText(str.str(), this->Font, sf::Color::White, Graphics::Gui::CoordPosX,
                        Graphics::Gui::CoordPosY + (50 * (this->ListItems.size() + 1)));
            this->ListItems.push_back(tmp);
            std::cout << "Add : " << str.str() << std::endl;
            break ;
        }
        case Stream::Del:
        {
            if (this->ListItems.size() > 0)
            {
                this->ListItems.erase(this->ListItems.end());
            }
            break ;
        }
        default :
            break ;
    }
}

int     Gui::SceneEvent()
{
    this->Ret = 1;
    while (this->Window.pollEvent(this->Event))
    {
        switch (this->Event.type)
        {
            case sf::Event::Closed:
            {
                this->Window.close();
                this->Ret = -1;
                break ;
            }
            case sf::Event::MouseButtonPressed:
            {
                switch (this->Event.mouseButton.button)
                {
                    case sf::Mouse::Left:
                    {
                        std::cout << sf::Mouse::getPosition().x << std::endl;
                        std::cout << sf::Mouse::getPosition().y << std::endl;
                        break ;
                    }
                    default:
                        break;
                }
                break;
            }
            case sf::Event::KeyPressed:
            {
                switch (this->Event.key.code)
                {
                    case sf::Keyboard::Escape:
                    {
                        this->Window.close();
                        this->Ret = -1;
                        break ;
                    }
                    case sf::Keyboard::Up:
                    {
                        this->CaseSelect == Stream::Box_X ? this->CaseSelect = Stream::Pack_Z : this->CaseSelect -= 1;
                        break ;
                    }
                    case sf::Keyboard::Down:
                    {
                        this->CaseSelect == Stream::Pack_Z ? this->CaseSelect = Stream::Box_X : this->CaseSelect += 1;
                        break ;
                    }
                    case sf::Keyboard::Left :
                    {
                        if (this->CaseSelect == Stream::Add)
                            this->CaseSelect += 1;
                        else if (this->CaseSelect == Stream::Del)
                            this->CaseSelect -= 1;
                        break ;
                    }
                    case sf::Keyboard::Right:
                    {
                        if (this->CaseSelect == Stream::Add)
                            this->CaseSelect += 1;
                        else if (this->CaseSelect == Stream::Del)
                            this->CaseSelect -= 1;
                        break ;
                    }
                    case sf::Keyboard::Return:
                    {
                        if (this->CaseSelect == Stream::Del || this->CaseSelect == Stream::Add)
                        {
                            this->SetThings();
                            break ;
                        }
                        else
                        {
                            this->SetNewData();
                            this->Window.resetGLStates();
                            this->Ret = 2;
                            break;
                        }
                    }
                    default:
                        break;
                }
                break ;
            }
            case sf::Event::TextEntered :
            {
                if (this->CaseSelect != Stream::Add && this->CaseSelect != Stream::Del)
                {
                    if (isdigit(this->Event.text.unicode))
                    {
                        this->ArrayStream[this->CaseSelect] << static_cast<char>(this->Event.text.unicode);
                    }
                    else if (this->Event.text.unicode == '\b' &&
                               this->ArrayStream[this->CaseSelect].str().size() > 0)
                    {
                        std::string tmp = "";
                        unsigned long size = this->ArrayStream[this->CaseSelect].str().size();

                        tmp = this->ArrayStream[this->CaseSelect].str().erase(size - 1, 1);
                        this->ArrayStream[this->CaseSelect].str(tmp);
                    }
                    this->ArrayData[this->CaseSelect].GetText().setString(this->ArrayStream[this->CaseSelect].str());
                    break;
                }
            }
            default:
                break;
        }
    }
    return this->Ret;
}