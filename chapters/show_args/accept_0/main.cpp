#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>

/// show_args main function
int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);
  std::copy(std::begin(args), std::end(args), std::ostream_iterator<std::string>(std::cout, " "));
  std::cout << '\n';
}
