#include <iostream>
using namespace std;

void fibonacci(int n) {
  int fib1 = 0, fib2 = 1, fib3;
  cout << fib1 << " " << fib2 << " ";

  for (int i = 2; i < n; i++) {
    fib3 = fib1 + fib2;
    cout << fib3 << " ";
    fib1 = fib2;
    fib2 = fib3;
  }
}

int main() {
  int n;
  cout << "Enter the number of terms in the Fibonacci series: ";
  cin >> n;

  fibonacci(n);

  return 0;
}
