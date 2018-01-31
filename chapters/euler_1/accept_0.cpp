#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

/// Removes all values in v that are multiples of x
void remove_multiples(
  std::vector<int>& values,
  const int multiple
)
{
  const auto new_end = std::remove_if(
    std::begin(values),
    std::end(values),
    [multiple](const int value) { return value % multiple == 0; }
  );
  values.erase(new_end, std::end(values));
}

/// Find the sum of all the multiples of 3 or 5 below 1000
int main()
{
  std::vector<int> values(1000, 0);
  std::iota(std::begin(values), std::end(values), 0);
  remove_multiples(values, 3);
  remove_multiples(values, 5);
  const int sum = std::accumulate(std::begin(values), std::end(values), 0);
  std::cout << sum << '\n';
}
