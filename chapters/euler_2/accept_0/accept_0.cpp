#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

/// Create the Fibonacci sequence, starting
/// with 1,2 (instead of 1,1,2) until the value of max
std::vector<int> create_fibonacci(const int max) noexcept
{
  std::vector<int> values;
  values.push_back(1);
  values.push_back(2);
  int first = 1;
  int second = 2;
  int third = first + second;
  while (third < max)
  {
    values.push_back(third);
    first = second;
    second = third;
    third = first + second;
  }
  return values;
}

/// Remove all odd values
void remove_odd(std::vector<int>& values)
{
  const auto new_end = std::remove_if(
    std::begin(values),
    std::end(values),
    [](const int value) { return value % 2 != 0; }
  );
  values.erase(new_end, end(values));
}

/// Each new term in the Fibonacci sequence is generated
/// by adding the previous two terms.
/// By starting with 1 and 2, the first 10 terms will be:
///
/// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
///
/// By considering the terms in the Fibonacci sequence
/// whose values do not exceed four million,
/// find the sum of the even-valued terms.
int main()
{
  std::vector<int> values = create_fibonacci(4000000);
  remove_odd(values);
  const int sum = std::accumulate(std::begin(values), std::end(values), 0);
  std::cout << sum << '\n';
}
