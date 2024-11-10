#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int lower, upper, sum = 0;

    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    if (lower > upper) {
        cout << "Lower bound must be less than or equal to upper bound." << endl;
        return 1;
    }

    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    cout << "The sum of prime numbers between " << lower << " and " << upper << " is: " << sum << endl;

    return 0;
}