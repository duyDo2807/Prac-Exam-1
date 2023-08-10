#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_digits[] = {1, 0, 1, 1, 0, 1};
  int array_size = 6;

  int result = bin_to_int(binary_digits, array_size);

  std::cout << "Binary: ";
  for (int i = 0; i < array_size; i++) {
    std::cout << binary_digits[i];
  }
  std::cout << std::endl;
  std::cout << "Int: " << result << std::endl;

  return 0;
}