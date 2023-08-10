#include <iostream>

extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);
extern int palindrome_sum(int integers[], int length);

int main() {
  int array[] = {-1, 2, 2, -1};
  int length = 4;
  int result = palindrome_sum(array, length);
  std::cout << result << std::endl;
  return 0;
}