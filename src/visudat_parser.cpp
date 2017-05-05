#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

void	parse_file(std::ifstream& input, std::vector<float>& datas)
{
  float tmp;

  while (true)
  {
    input >> tmp;
    if (input.eof())
      break;
    datas.push_back(tmp);
  }
}

void	print_datas(std::vector<float>& datas)
{
  for (auto tmp : datas)
    std::cout << tmp << std::endl;
}