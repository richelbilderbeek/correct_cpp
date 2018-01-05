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

    // Is this a perfect number?
    // -1: unknown
    //  0: false
    //  1: true
    int is_perfect{-1};

    // Negative values are not perfect
    if (value < 0) is_perfect = 0;

    // Zero is not perfect
    if (is_perfect == -1 && value == 0) is_perfect = 0;

    //Collect the proper divisors
    std::vector<int> proper_divisors;
    
    if (is_perfect == -1 && value == 2)
    {
      proper_divisors.push_back(1);
    }
    else if (is_perfect == -1 && value > 2)
    {
      for (int denominator=1; denominator!=value-1; ++denominator)
      {
        if (value % denominator == 0)
        {
          proper_divisors.push_back(denominator);
        }
      }
    }

    //sum the proper divisors, if not known if number is perfect
    int sum{0};
    if (is_perfect == -1)
    {
      for (const int proper_divisor: proper_divisors) { sum += proper_divisor; }
    }
    if (is_perfect == -1 && sum == value) is_perfect = 1;
    if (is_perfect == -1) is_perfect = 0;

    //show
    assert(is_perfect != -1); //Must be known now
    if (is_perfect == 1)
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
