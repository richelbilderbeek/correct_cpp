#include <iostream>

int main(int argc, char* argv[])
{
  std::cout << argv[0];
  for (int i=0; i!=argc; ++i)
  {
    std::cout << ' '  << argv[i];
  }
  std::cout << '\n';
}
