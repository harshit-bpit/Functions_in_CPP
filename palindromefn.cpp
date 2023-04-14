#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;

    // Reversing digit
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    // Compare the reversed number with the original
    return (reversed == original);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome" << endl;
    } else {
        cout << n << " is not a palindrome" << endl;
    }

    return 0;
}
