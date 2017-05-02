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


int main(int argc, char *argv[])
{
  std::ifstream		input;
  std::vector<float>	datas;

  if (argc < 2)
  {
    std::cerr << "Provide file" << std::endl;
    return (-1);
  }
  input.open(argv[1]);
  if (!input.is_open())
  {
    std::cerr << "Could not open file" << std::endl;
    return (-1);
  }

  parse_file(input, datas);
  print_datas(datas);
  return 0;
}
