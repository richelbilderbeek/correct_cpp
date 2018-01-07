#include <cassert>
#include <iostream>
#include <string>
#include <vector>

std::string int_to_word(const int value)
{
  switch (value)
  {
    case 1: return "one";
    case 2: return "two";
    case 3: return "three";
    case 4: return "four";
    case 5: return "five";
    case 6: return "six";
    default: throw std::invalid_argument("value must be in range [1, 6]");
  }
}

int do_main(const std::vector<std::string>& args)
{
  if (args.size() != 2) return 1;
  try
  {
    const int value{std::stoi(args[1])};
    std::cout << int_to_word(value) << '\n';
  }
  catch (const std::exception&)
  {
    return 1;
  }
  return 0;
}

void test_do_main()
{
  assert(do_main( { "main" } ) == 1);
  assert(do_main( { "main", "too", "many" } ) == 1);
  assert(do_main( { "main", "0" } ) == 1);
  assert(do_main( { "main", "1" } ) == 0);
  assert(do_main( { "main", "7" } ) == 1);
}

void test_int_to_word()
{
  assert(int_to_word(1) == "one");
  assert(int_to_word(2) == "two");
  assert(int_to_word(3) == "three");
  assert(int_to_word(4) == "four");
  assert(int_to_word(5) == "five");
  assert(int_to_word(6) == "six");
}

void test()
{
  test_do_main();
  test_int_to_word();
}

int main(int argc, char* argv[]) 
{
  test();
  const std::vector<std::string> args(argv, argv + argc);
  return do_main(args);
}
