#include <cassert>
#include <iostream>
#include <string>
#include <vector>

/// Implementation of bool_to_coin main function
int do_main(const std::vector<std::string>& args) 
{
  if (args.size() != 2) 
  {
    return 1;
  }
  if (args[1] == "true") 
  { 
    std::cout << "heads\n";   
  }
  else if (args[1] == "false") 
  { 
    std::cout << "tails\n"; 
  }
  else 
  {
    return 1;
  }
  return 0;
}


/// bool_to_coin main function, that also tests its implementation
int main(int argc, char* argv[])
{
  assert(do_main( { "bool_to_coin" } ) == 1);
  assert(do_main( { "bool_to_coin", "true" } ) == 0);
  assert(do_main( { "bool_to_coin", "false" } ) == 0);
  assert(do_main( { "bool_to_coin", "nonsense" } ) == 1);
  assert(do_main( { "bool_to_coin", "true", "false" } ) == 1);
  return do_main(std::vector<std::string>(argv, argv + argc));
}
