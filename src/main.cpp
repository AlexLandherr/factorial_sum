#include "include/functions.h"
#include <iostream>
#include <cstdint>

/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

int main() {
    /* for (uint64_t i = 0; i < 10; i++) {
        std::cout << i << "! = " << func::factorial_of(i) << '\n';
    } */
    uint64_t test_num = 145;
    std::cout << "Is " << test_num << " equal to the sum of the factorial of its digits?: " << '\n';
    std::cout << std::boolalpha << func::is_equal_to_sum_of_factorial_of_digits(test_num) << '\n';

    return 0;
}