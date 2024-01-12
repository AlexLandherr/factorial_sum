#include "include/functions.h"
#include <string>
#include <stdexcept>
#include <array>

namespace func {
    int64_t factorial_of(int n) {
        const std::array<int64_t, 10> lookup_arr = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        if (n > 9 || n < 0) {
            throw std::invalid_argument("Argument 'n' is out of range. Must be 1 <= n <= 9.");
        } else {
            return lookup_arr[n];
        }
    }

    bool is_equal_to_sum_of_factorial_of_digits(int64_t n) {
        std::string n_as_str = std::to_string(n);
        int64_t sum_of_factorial_of_ns_digits = 0;
        for (char c : n_as_str) {
            sum_of_factorial_of_ns_digits += factorial_of((c - 48));
        }
        return sum_of_factorial_of_ns_digits == n;
    }

    int64_t get_answer() {
        int64_t sum = 0;
        int upper_bound = 7 * 362880;

        for (int i = 10; i < upper_bound; i++) {
            if (is_equal_to_sum_of_factorial_of_digits(i)) {
                sum += i;
            }
        }

        return sum;
    }
}