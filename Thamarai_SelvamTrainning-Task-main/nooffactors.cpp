#include <iostream>
#include <cmath>

using namespace std;

int countFactors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int numberOfFactors = countFactors(number);
    cout << "The number of factors of " << number << " is: " << numberOfFactors << endl;

    return 0;
}