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
    int n, count = 0, num = 1, nthPrime;

    cout << "Enter the value of n: ";
    cin >> n;

    while (count < n) {
        num++;
        if (isPrime(num)) {
            count++;
            nthPrime = num;
        }
    }

    cout << "The " << n << "th prime number is: " << nthPrime << endl;

    return 0;
}