// Exception escapes main

#include <string>
#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc == 1) return 1;
  std::cout << std::boolalpha << (std::stoi(argv[1]) % 2 == 1) << '\n';
}