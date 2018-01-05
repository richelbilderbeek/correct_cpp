#include <algorithm>
#include <cassert>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

std::vector<int> get_proper_divisors(const int i) noexcept
{
  if (i < 2) return {};
  if (i == 2) return { 1 };

  std::vector<int> v;
  for (int j=1; j!=i-1; ++j)
  {
    if (!(i % j))
    {
      v.push_back(j);
    }
  }
  return v;
}

int sum(const std::vector<int>& v) noexcept
{
  return std::accumulate(std::begin(v), std::end(v), 0);
}

bool is_perfect(const int i) noexcept
{
  if (i == 0) return false;
  return sum(get_proper_divisors(i)) == i;
}

void test_get_proper_divisors() noexcept
{
  assert(get_proper_divisors(1) == std::vector<int>() );
  assert(get_proper_divisors(2) == std::vector<int>( {1} ) );
  assert(get_proper_divisors(3) == std::vector<int>( {1} ) );
  assert(get_proper_divisors(4) == std::vector<int>( {1, 2} ) );
  assert(get_proper_divisors(5) == std::vector<int>( {1} ) );
  assert(get_proper_divisors(6) == std::vector<int>( {1, 2, 3} ) );
  assert(get_proper_divisors(7) == std::vector<int>( {1} ) );
  assert(get_proper_divisors(8) == std::vector<int>( {1, 2, 4} ) );
  assert(get_proper_divisors(9) == std::vector<int>( {1, 3} ) );
}

void test_is_perfect() noexcept
{
  assert(!is_perfect(-1));
  assert(!is_perfect(0));
  assert(!is_perfect(1));
  assert(!is_perfect(2));
  assert(!is_perfect(3));
  assert(!is_perfect(4));
  assert(!is_perfect(5));
  assert( is_perfect(6));
  assert(!is_perfect(7));
  assert(!is_perfect(8));
  assert(is_perfect(28));
}

int do_main(const std::vector<std::string>& args) noexcept
{
  if (args.size() != 2) return 1;
  try
  {
    std::cout << std::boolalpha << is_perfect(std::stoi(args[1])) << '\n';
  }
  catch (const std::exception&)
  {
    return 1;
  }
  return 0;
}
 
void test_do_main() noexcept
{
  assert(do_main( { "is_perfect" } ) == 1);
  assert(do_main( { "is_perfect", "1" } ) == 0);
  assert(do_main( { "is_perfect", "nonsense" } ) == 1);
  assert(do_main( { "is_perfect", "1", "2" } ) == 1);
}

void test() noexcept
{
  test_get_proper_divisors();
  test_is_perfect();
  test_do_main();
}

int main(int argc, char* argv[])
{
  test();
  const std::vector<std::string> args(argv, argv + argc);
  return do_main(args);
}
