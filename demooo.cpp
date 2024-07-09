#include <iostream>

int main() {
  int n;
  std::cout << "Enter the number of terms: ";
  std::cin >> n;
  std::cout << "Fibonacci Series: ";
  int t1 = 0, t2 = 1;
  for (int i = 1; i <= n; ++i) {
    std::cout << t1 << ", ";
    int nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }
  return 0;
}