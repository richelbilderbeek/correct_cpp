#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

/// Create all multiples until (excluding) max
std::vector<int> create_multiples(
  const int multiple,
  const int max
)
{
  std::vector<int> values(max - 1, 0);
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

/// Create all multiples until (excluding) max
std::vector<int> create_multiples(
  const std::vector<int>& multiples,
  const int max
)
{
  std::vector<int> result;
  for (const int multiple: multiples)
  {
    result = merge(result, create_multiples(multiple, max));
  }
  return result;
}

/// Sum all multiples until (excluding) max
int sum_multiples(
  const std::vector<int>& multiples,
  const int max
)
{
  const auto answer = create_multiples(multiples, max);
  const int sum = std::accumulate(std::begin(answer), std::end(answer), 0);
  return sum;
}

/// Test create_multiples for 3
void test_create_triplets()
{
  const auto triplets = create_multiples(3, 1000);
  assert(triplets[0] == 3);
  assert(triplets[1] == 6);
  assert(triplets.back() == 999);
  assert(triplets.size() == 333);
}

/// Test create_multiples for 5
void test_create_quintets()
{
  const auto quintets = create_multiples(5, 1000);
  assert(quintets[0] == 5);
  assert(quintets[1] == 10);
  assert(quintets.back() == 995);
  assert(quintets.size() == 199);
}

/// Test create_multiples for 3 and 5
void test_create_triplets_and_quintets()
{
  const auto result = create_multiples( {3,5}, 1000);
  assert(result[0] ==  3);
  assert(result[1] ==  5);
  assert(result[2] ==  6);
  assert(result[3] ==  9);
  assert(result[4] == 10);
  assert(result.back() == 999);
}

/// Test summing multiples
void test_sum_multiples()
{
  assert(sum_multiples( {3,5}, 10) == 23);
}

/// Find the sum of all the multiples of 3 or 5 below 1000
int main()
{
  test_create_triplets();
  test_create_quintets();
  test_create_triplets_and_quintets();
  test_sum_multiples();
  const int sum = sum_multiples( {3,5}, 1000);
  std::cout << sum << '\n';
}
