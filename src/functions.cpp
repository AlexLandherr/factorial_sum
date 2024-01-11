#include "include/functions.h"
#include <string>

/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

namespace func {
    uint64_t factorial_of(uint64_t n) {
        uint64_t result = 1;
        if (n == 0) {
            return result;
        } else {
            for (uint64_t i = 1; i <= n; i++) {
                result *= i;
            }
            return result;
        }
    }

    bool is_equal_to_sum_of_factorial_of_digits(uint64_t n) {
        std::string n_as_str = std::to_string(n);
        uint64_t sum_of_factorial_of_ns_digits = 0;
        for (char c : n_as_str) {
            sum_of_factorial_of_ns_digits += factorial_of((c - 48));
        }
        return sum_of_factorial_of_ns_digits == n;
    }
}