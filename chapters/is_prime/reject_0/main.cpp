#include <cassert>
#include <string>
#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc != 2) return 1;
  try
  {
    const int value{std::stoi(argv[1])};
    // -1: unknown
    //  0: false
    //  1: true
    int is_prime = -1;

    //Trivial cases
    if (value < 2) is_prime = 0;
    if (is_prime == -1 && value == 2) is_prime = 1;

    //Complex cases
    for (int denominator=2; denominator!=value-1; ++denominator)
    {
      if (is_prime != -1) break;
      if (value % denominator == 0)
      {
        is_prime = 0;
      }
    }
    if (is_prime == -1) is_prime = 1;

    //Display the result
    assert(is_prime != -1); //Must be known now
    if (is_prime == 0)
    {
      std::cout << "false\n";
    }
    else
    {
      std::cout << "true\n";
    }
  }
  catch (const std::invalid_argument&)
  {
    return 1;
  }
  catch (const std::out_of_range&)
  {
    return 1;
  }
}
