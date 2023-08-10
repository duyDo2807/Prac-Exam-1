#include <cmath>
#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits) {
  int result = 0;

  for (int i = 0; i < number_of_digits; i++) {
    if (binary_digits[i] == 1) {
      result = result + pow(2, number_of_digits - i - 1);
    }
  }

  return result;
}