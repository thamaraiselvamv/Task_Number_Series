#include <iostream>
#include <cmath>

using namespace std;

void checkArmstrong(int a) {
    int n = a, sum = 0, temp = 0;

    // Count the number of digits
    while (n != 0) {
        n = n / 10;
        temp++;
    }

    n = a; // Reset n to the original number

    // Calculate the sum of the digits raised to the power of temp
    while (n != 0) {
        int digit = n % 10;
        sum += static_cast<int>(pow(digit, temp)); // Cast to int
        n = n / 10;
    }

    // Check if the sum is equal to the original number
    if (sum == a) {
        cout << a << " is an Armstrong number." << endl;
    } else {
        cout << a << " is not an Armstrong number." << endl;
    }
}

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;

    // Check for negative numbers
    if (a < 0) {
        cout << a << " is not an Armstrong number." << endl;
    } else {
        checkArmstrong(a);
    }

    return 0;
}