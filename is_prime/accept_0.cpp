#include <cassert>
#include <string>
#include <iostream>
#include <vector>

bool is_prime(const int value) noexcept
{
  if (value < 2)
  {
    return false;
  }
  if (value == 2)
  {
    return true;
  }
  for (int denominator=2; denominator!=value-1; ++denominator)
  {
    if (value % denominator == 0)
    {
      return false;
    }
  }
  return true;
}

int do_main(const std::vector<std::string>& args) noexcept
{
  if (args.size() != 2) return 1;
  try
  {
    std::cout << std::boolalpha << is_prime(std::stoi(args[1])) << '\n';
  }
  catch (const std::exception&)
  {
    return 1;
  }
  return 0;
}

void test_do_main() noexcept
{
  assert(do_main( { "is_prime"} ) == 1);
  assert(do_main( { "is_prime", "4"} ) == 0);
  assert(do_main( { "is_prime", "7"} ) == 0);
  assert(do_main( { "is_prime", "nonsense"} ) == 1);
  assert(do_main( { "is_prime", "4", "16" } ) == 1);
}

void test_is_prime() noexcept
{
  assert(!is_prime(-1));
  assert(!is_prime(0));
  assert(!is_prime(1));
  assert( is_prime(2));
  assert( is_prime(3));
  assert(!is_prime(4));
  assert( is_prime(5));
  assert(!is_prime(6));
  assert( is_prime(7));
}

void test() noexcept
{
  test_do_main();
  test_is_prime();
}

int main(int argc, char* argv[]) 
{
  test();
  return do_main(std::vector<std::string>(argv, argv + argc));
}
