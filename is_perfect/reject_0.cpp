#include <cassert>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  if (argc != 2) return 1;
  try
  {
    const int value{std::stoi(argv[1])};
    if (value == 0)
    {
      std::cout << "false\n";
      return 0;
    }
    //Collect the proper divisors
    std::vector<int> proper_divisors;
    if (value < 2)
    {
      //proper_divisors is okay as it is
    }
    else if (value == 2)
    {
      proper_divisors.push_back(1);
    }
    else
    {
      for (int denominator=1; denominator!=value-1; ++denominator)
      {
        if (value % denominator == 0)
        {
          proper_divisors.push_back(j);
        }
      }
    }
    //sum the proper divisors
    int sum{0};
    for (const int proper_divisor: proper_divisors) { sum += proper_divisor; }
    //is it perfect?
    const bool is_perfect{sum == value};
    //show
    if (is_perfect)
    {
      std::cout << "true\n";
    }
    else
    {
      std::cout << "false\n";
    }
  }
  catch (const std::exception&)
  {
    return 1;
  }
}
