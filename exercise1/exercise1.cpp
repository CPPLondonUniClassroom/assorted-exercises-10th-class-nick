
#include "exercise1.hpp"

// Requirements:
//   -- if i is even, returns true
//   -- if i is odd, returns false
bool is_even(int i)
{
    return i % 2 == 0;
}

// Requirements:
//   -- returns the number of odd numbers in the given vector
int count_odd(const std::vector<int>& vec)
{
    int count = 0;
    for (const auto& i: vec)
        if (!is_even(i))
            count++;

    return count;
}

// Requirements:
//   -- returns the sum of the even numbers in the vector
int even_sum(const std::vector<int>& vec)
{
    int sum = 0;
    for (const auto& i: vec)
        if (is_even(i))
            sum += i;

    return sum;
}

// Requirements:
//   -- returns a new vector containing only the elements of vec which are
//      divisible by p
std::vector<int> copy_if_divisible_by(const std::vector<int>& vec, int p)
{
    std::vector<int> ret;
    std::copy_if(
        vec.begin(),
        vec.end(),
        ret.begin(),
        [&p] (const int& i) { return i % p == 0; }
    );
    return ret;

    )
}

// Requirements:
//   -- returns the largest number in the vector which is divisible by 3, or
//      zero if there are no such numbers
int largest_div_by_three(const std::vector<int>& vec)
{
    return 0;
}

// Requirements:
//   -- returns true if the elements in vec are sorted, and false otherwise
bool is_sorted(const std::vector<int>& vec)
{
    return false;
}
