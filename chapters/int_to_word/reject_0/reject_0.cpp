/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) 
{
  if (argc != 2)
  {
    return 1;
  }
  try
  {
    const int value{std::stoi(argv[1])};
    switch (value)
    {
      case 1: std::cout << "one\n"; break;
      case 2: std::cout << "two\n"; break;
      case 3: std::cout << "three\n"; break;
      case 4: std::cout << "four\n"; break;
      case 5: std::cout << "five\n"; break;
      case 6: std::cout << "six\n"; break;
      default: throw std::invalid_argument("value must be in range [1, 6]");
    }
  }
  catch (const std::exception&)
  {
    return 1;
  }
}
