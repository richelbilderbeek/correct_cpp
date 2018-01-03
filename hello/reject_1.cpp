#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  if (argc != 2) return 1;
  try
  {
    const int i{std::stoi(argv[1])};
    if (i == 0)
    {
      std::cout << "false\n";
      return 0;
    }
    //Collect the proper divisors
    std::vector<int> v;
    if (i < 2)
    {
      //v is okay as it is
    }
    else if (i == 2)
    {
      v.push_back(1);
    }
    else
    {
      for (int j=1; j!=i-1; ++j)
      {
        if (i % j == 0)
        {
          v.push_back(j);
        }
      }
    }
    //sum the proper divisors
    int sum{0};
    for (const int j: v) { sum += j; }
    //is it perfect?
    const bool is_perfect{sum == i};
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
