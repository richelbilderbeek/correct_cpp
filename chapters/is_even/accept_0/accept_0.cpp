/** @file */
/** @file */
#include <cassert>
#include <iostream>
#include <regex>
#include <string>
#include <vector>

/// Checks if a word is an even integer. The integer can be
/// an length, and may also be negative. Floating-point
/// values are not integer.
/// @param word the string to see if it is an even integer
bool is_even(const std::string& word)
{
  const std::regex even("-?[[:digit:]]*(0|2|4|6|8)");
  return std::regex_match(word, even);
}

/// Checks if a word is an integer. The integer can be
/// an length, and may also be negative. Floating-point
/// values are not integer.
/// @param word the string to see if it is an integer
bool is_int(const std::string& word)
{
  const std::regex number("-?[[:digit:]]+");
  return std::regex_match(word, number);
}

/// is_even main function
/// @param args the command line argument, excluding the path to the file itself
int do_main(const std::vector<std::string>& args)
{
  // zero arguments: user did not enter comman-line arguments
  if (args.size() != 1) return 1;
  const std::string word{args.back()};
  if (!is_int(word)) return 1;
  std::cout << std::boolalpha << is_even(word) << '\n';
  return 0;
}

/// Test if 'is_even' is correct for negative values
void test_is_even_negative() noexcept
{
  assert( is_even("-12"));
  assert(!is_even("-11"));
  assert( is_even("-2"));
  assert(!is_even("-1"));
}

/// Test if 'is_even' is correct for positive values
void test_is_even_positive() noexcept
{
  assert( is_even("0"));
  assert(!is_even("1"));
  assert( is_even("2"));
  assert(!is_even("111"));
  assert( is_even("112"));
  assert(!is_even("123456789012345678901"));
  assert( is_even("123456789012345678902"));
}

/// Test if 'is_even' is correct
void test_is_even() noexcept
{
  test_is_even_negative();
  test_is_even_positive();
}

/// Test if 'is_int' is correct
void test_is_int() noexcept
{
  assert(is_int("1"));
  assert(is_int("-1"));
  assert(!is_int("3.14"));
  assert(!is_int("true"));
}

/// Test if the exit states of do_main are correct
void test_do_main() noexcept
{
  assert(do_main( { "" } ) == 1);
  assert(do_main( { "1" } ) == 0);
  assert(do_main( { "2" } ) == 0);
  assert(do_main( { "3.14" } ) == 1);
  assert(do_main( { "nonsense" } ) == 1);
  assert(do_main( { "1", "2" } ) == 1);
}

/// Test the full program
void test() noexcept
{
  test_do_main();
  test_is_int();
  test_is_even();
}

/// is_even main function
int main(int argc, char* argv[]) 
{
  test();
  return do_main(std::vector<std::string>(argv + 1, argv + argc));
}
