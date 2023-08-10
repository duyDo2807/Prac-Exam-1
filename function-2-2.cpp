#include <cmath>
#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits) {
  if (binary_digits == 0) {
    return 0;
  }
  int result = 0;

  for (int i = 0; i < number_of_digits; i++) {
    int digit = binary_digits[i];
    result = result + (digit * pow(2, number_of_digits - i - 1));
  }

  return result;
}