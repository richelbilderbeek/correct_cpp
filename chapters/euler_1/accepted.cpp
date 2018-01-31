#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

/// Removes all values in v that are multiples of x
void remove_multiples(
  std::vector<int>& v,
  const int x
)
{
  const auto new_end = std::remove_if(
    std::begin(v),
    std::end(v),
    [x](const int i) { return i % x == 0; }
  );
  v.erase(new_end, std::end(v));
}

/// Find the sum of all the multiples of 3 or 5 below 1000
int main()
{
  std::vector<int> v(1000, 0);
  std::iota(std::begin(v), std::end(v), 0);
  remove_multiples(v, 3);
  remove_multiples(v, 5);
  const int sum = std::accumulate(std::begin(v), std::end(v), 0);
  std::cout << sum << '\n';
}
