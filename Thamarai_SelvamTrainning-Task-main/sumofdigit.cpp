#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleDigitSum(int n) {
    while (n >= 10) {
        n = sumOfDigits(n);
    }
    return n;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int result = singleDigitSum(n);
    cout << "The single-digit sum is: " << result << endl;
    return 0;
}