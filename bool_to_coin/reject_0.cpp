#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc != 2) 
  {
    return 1;
  }
  if (argv[1] == "true") 
  { 
    std::cout << "heads\n";   
  }
  else if (argv[1] == "false") 
  { 
    std::cout << "tails\n"; 
  }
  else 
  {
    return 1;
  }
}
