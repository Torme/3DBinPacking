//
// Created by sami on 04/05/17.
//

#ifndef INC_3DBINPACKING_VISUDAT_PARSER_HPP
#define INC_3DBINPACKING_VISUDAT_PARSER_HPP

#include <vector>
#include <fstream>

class   VisudatParser
{
public:
    VisudatParser() : input() {}
    ~VisudatParser() {}
    VisudatParser(const VisudatParser & other) = delete;
    const VisudatParser & operator=(const VisudatParser & other) = delete;

public:
    bool    CheckFile(const std::string & FileName);
    void    ParseData(std::array<float, 3> &Box, std::vector<std::array<float, 6>> &Thing);

private:
    std::ifstream   input;
};
#endif //INC_3DBINPACKING_VISUDAT_PARSER_HPP
