# How to get a 100% code coverage?

This article describes how to get 100% code coverage, illustrated by solving of a simple exercise.

## Exercise

Write a command-line interface (CLI) program, that gives the following results:

Call to `hello_cli`|Output|Exit status
---|---|---
`./bool_to_coin`|Any|1
`./bool_to_coin true`|`heads` (with newline)|0
`./bool_to_coin false`|`tails` (with newline)|0
`./bool_to_coin nonsense`|Any|1
`./bool_to_coin 1 2`|Any|1

## Naive solution

A solution that does fulfill the desired output is this:

```c++
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
```

As there are four different ways to go through `main`, 100% code coverage can never be achieved from a single call to the application.

The trick is to put the program's logic in another function, then test that function before calling it.

## Step 1: put the program's logic in another function

Simply move the content of `main` to another function:

```c++
#include <iostream>
#include <string>
#include <vector>

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
}

int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);
  return do_main(args);
}
```

Notice that the C-style raw array of raw character pointers is converted to a C++ `std::vector<std::string>`.
This will make it easier to write tests for `do_main`.

## Step 2: test `do_main` before calling it

By adding `assert`s in the first lines of `main`, `do_main` is fully tested:

```c++
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

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
}

int main(int argc, char* argv[])
{
  assert(do_main( { "bool_to_coin" } ) == 1);
  assert(do_main( { "bool_to_coin", "true" } ) == 0);
  assert(do_main( { "bool_to_coin", "false" } ) == 0);
  assert(do_main( { "bool_to_coin", "nonsense" } ) == 1);
  assert(do_main( { "bool_to_coin", "true", "false" } ) == 1);
  return do_main(argc, argv);
}
```

