#include <string>
#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc != 2) return 1;
  try
  {
    const int value{std::stoi(argv[1])};
    if (value < 2)
    {
      std::cout << "false\n"; return 0;
    }
    if (value == 2)
    {
      std::cout << "true\n"; return 0;
    }
    for (int denominator=2; denominator!=value-1; ++denominator)
    {
      if (value % denominator == 0)
      {
        std::cout << "false\n";
        return 0;
      }
    }
    std::cout << "true\n";
  }
  catch (const std::exception&)
  {
    return 1;
  }
}
