#include <iostream>

using namespace std;

int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int trailingZeros = countTrailingZeros(number);
    cout << "The number of trailing zeros in " << number << "! is: " << trailingZeros << endl;

    return 0;
}