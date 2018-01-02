#include <string>
#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc == 1) return 1;
  try
  {
    const int i{std::stoi(argv[1])};
    if (i < 2)
    {
      std::cout << "false\n"; return 0;
    }
    if (i == 2)
    {
      std::cout << "true\n"; return 0;
    }
    for (int j=2; j!=i-1; ++j)
    {
      if (i % j == 0)
      {
        std::cout << "false\n";
        return 0;
      }
    }
    std::cout << "true\n";
  }
  catch (const std::invalid_argument) // caught by value
  {
    return 1;
  }
  catch (const std::out_of_range& e)
  {
    return 1;
  }
}
