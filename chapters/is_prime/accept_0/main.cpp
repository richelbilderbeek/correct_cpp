#include <cassert>
#include <string>
#include <iostream>
#include <vector>

/// Checks if a certain value is a prime number
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

/// Implementation of is_prime main function
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

/// Tests the exit output of the do_main function
void test_do_main() noexcept
{
  assert(do_main( { "is_prime"} ) == 1);
  assert(do_main( { "is_prime", "4"} ) == 0);
  assert(do_main( { "is_prime", "7"} ) == 0);
  assert(do_main( { "is_prime", "nonsense"} ) == 1);
  assert(do_main( { "is_prime", "4", "16" } ) == 1);
}

/// Tests the output of the is_prime function
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

/// Runs all tests for this program 
void test() noexcept
{
  test_do_main();
  test_is_prime();
}

/// is_prime main function, that also tests its implementation
int main(int argc, char* argv[]) 
{
  test();
  return do_main(std::vector<std::string>(argv, argv + argc));
}
