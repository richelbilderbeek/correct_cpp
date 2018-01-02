# How to lower cyclomatic complexity?

This article describes how to lower cyclomatic complexity.

## Example: test function

This is a simple example, in which a test function is too long:

```c++
void test()
{
  assert(do_main( { "main" } ) == 1);
  assert(do_main( { "main", "too", "many" } ) == 1);
  assert(do_main( { "main", "0" } ) == 1);
  assert(do_main( { "main", "1" } ) == 0);
  assert(do_main( { "main", "7" } ) == 1);
  assert(int_to_word(1) == "one");
  assert(int_to_word(2) == "two");
  assert(int_to_word(3) == "three");
  assert(int_to_word(4) == "four");
  assert(int_to_word(5) == "five");
  assert(int_to_word(6) == "six");
}
```

Too bad, cyclomatic complexity is too high.
Sure, a human can easily read it, but in this course, the tools tell us what is correct.

To simplify `test`, spread the tests over two functions:

```c++
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
```

## Example: extract a function

Good comments describe what happens in the code at a higher level.
If a group of statements belong together, these can be grouped in a function.

For example:

```c++
void f()
{
  std::vector<int> v;

  // [many things happen to v]

  // Get the sum of all values in v
  int total{0};
  for (const int i: v) { total += i; }

  // ['total' is only read]
}
```

This can easily be rewritten to:

```c++
int sum(const std::vector<int>& v)
{
  int total{0};
  for (const int i: v) { total += i; }
  return total;
}

void f()
{
  std::vector<int> v;

  // [many things happen to v]

  const int total{sum(v)};

  // ['total' is only read]
}
```

Notice that `total` becomes a `const` value, as it should. Just striving for const-correctness helps you
find opportunities to simplify your code.

More experienced programmers do not write such a `sum` function, as they know the STL algorithms and use `std::accumulate`:

```c++
void f()
{
  std::vector<int> v;

  // [many things happen to v]

  const int total{std::accumulate(std::begin(v), std::end(v), 0)};

  // ['total' is only read]
}
```
