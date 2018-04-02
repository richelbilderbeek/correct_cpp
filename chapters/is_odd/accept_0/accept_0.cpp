/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
/** @file */
#include <string>
#include <iostream>

/// is_odd main function
int main(int argc, char* argv[]) 
{
  if (argc == 1) return 1;
  try
  {
    std::cout << std::boolalpha << (std::stoi(argv[1]) % 2 != 0) << '\n';
  }
  catch (const std::invalid_argument&)
  {
    return 1;
  }
  catch (const std::out_of_range&)
  {
    return 1;
  }
}