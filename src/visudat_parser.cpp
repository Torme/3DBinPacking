#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "Graphics.hpp"
#include "visudat_parser.hpp"

bool     VisudatParser::CheckFile(const std::string & FileName)
{
    this->input.open(FileName);
    return this->input.is_open();
}

void    VisudatParser::ParseData(std::array<float, 3> &Box, std::vector<std::array<float, 6>> &Thing)
{
    float                   tmp = 0.f;
    std::array<float, 6>    Thing_tmp;

    for ( unsigned int i = 0 ; !this->input.eof() ; i+=1 )
    {
        this->input >> tmp;
        if (i < Graphics::Datas::NbDatasBox)
        {
            std::cout << "data box = " << tmp << std::endl;
            Box[i] = tmp;
            std::cout << Box[i] << std::endl;
        }
        else
        {
            Thing_tmp[i - 3] = tmp;
            std::cout << "things = " << tmp << std::endl;
            if ((i - 3) == (Graphics::Datas::NbDatasThings - 1))
            {
                std::cout << "push tab" << std::endl;
                Thing.push_back(Thing_tmp);
                i = 2;
            }
        }
    }
    this->input.close();
}

//void	parse_file(std::ifstream& input, std::vector<float>& datas)
//{
//  float tmp;
//
//  while (true)
//  {
//    input >> tmp;
//    if (input.eof())
//      break;
//    datas.push_back(tmp);
//  }
//}
//
//void	print_datas(std::vector<float>& datas)
//{
//  for (auto tmp : datas)
//    std::cout << tmp << std::endl;
//}