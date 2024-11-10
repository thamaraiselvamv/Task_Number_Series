#include <iostream>

using namespace std;

long long largestPrimeFactor(long long n) {
    long long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    long long number;

    cout << "Enter a number: ";
    cin >> number;

    long long largestFactor = largestPrimeFactor(number);
    cout << "The largest prime factor of " << number << " is: " << largestFactor << endl;

    return 0;
}