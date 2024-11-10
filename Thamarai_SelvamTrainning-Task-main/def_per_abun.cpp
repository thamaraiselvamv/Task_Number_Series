#include <iostream>

using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int sum = sumOfDivisors(number);

    if (sum < number) {
        cout << number << " is a deficient number." << endl;
    } else if (sum == number) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is an abundant number." << endl;
    }

    return 0;
}