# Do the exercise using GCC

You can [do the exercise](do_the_exercise.md) using GCC.

From a terminal, do:

```
g++ main.cpp
```

To run the created executable, which as the name `a.out` by default, type:

```
./a.out
```

The course compiles with C++17 with highest warning levels. To do so yourself, instead use:

```
g++ -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror -std=c++17 main.cpp
```

Think you are done with the exercise? Time to [push your code](push_your_code.md)!
