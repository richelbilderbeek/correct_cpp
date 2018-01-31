#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

/// Create all multiples until max
std::vector<int> create_multiples(
  const int multiple,
  const int max
)
{
  std::vector<int> values(max, 0);
  std::iota(std::begin(values), std::end(values), 1);
  const auto new_end = std::remove_if(
    std::begin(values),
    std::end(values),
    [multiple](const int value) { return value % multiple != 0; }
  );
  values.erase(new_end, std::end(values));
  return values;
}

/// Get all unique values of both vectors
std::vector<int> merge(
  std::vector<int> values,
  const std::vector<int>& other_values
)
{
  std::copy(
    std::begin(other_values),
    std::end(other_values),
    std::back_inserter(values)
  );
  std::sort(std::begin(values), std::end(values));
  const auto new_end = std::unique(
    std::begin(values),
    std::end(values)
  );
  values.erase(new_end, std::end(values));
  return values;
}


/// Find the sum of all the multiples of 3 or 5 below 1000
int main()
{
  const auto triplets = create_multiples(3, 1000);
  assert(triplets[0] == 3);
  assert(triplets[1] == 6);
  assert(triplets.size() == 333);
  const auto quintets = create_multiples(5, 1000);
  assert(quintets[0] == 5);
  assert(quintets[1] == 10);
  assert(quintets.size() == 200);
  const auto answer = merge(triplets, quintets);
  const int sum = std::accumulate(std::begin(answer), std::end(answer), 0);
  std::cout << sum << '\n';
}
