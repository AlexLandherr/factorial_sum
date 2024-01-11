#include "include/functions.h"
#include <iostream>
#include <cstdint>
#include <stdexcept>

/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

int main() {
    try {
        int64_t test_num0 = 10;
        int64_t result = func::factorial_of(test_num0);
        std::cout << "Result: " << result << '\n';
    } catch (const std::invalid_argument& ex) {
        std::cout << ex.what() << '\n';
    } catch (const std::exception& ex) {
        std::cout << ex.what() << '\n';
    }

    int64_t test_num1 = 145;
    std::cout << "Is " << test_num1 << " equal to the sum of the factorial of its digits?: " << '\n';
    std::cout << std::boolalpha << func::is_equal_to_sum_of_factorial_of_digits(test_num1) << '\n';

    return 0;
}