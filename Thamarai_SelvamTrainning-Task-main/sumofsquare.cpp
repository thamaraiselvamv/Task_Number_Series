#include <iostream>

using namespace std;

int sumOfSquareOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int result = sumOfSquareOfDigits(n);
    cout << "The sum of the squares of the digits of " << n << " is: " << result << endl;
    return 0;
}