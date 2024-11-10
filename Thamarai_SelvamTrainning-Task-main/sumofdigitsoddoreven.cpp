#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    int sumOdd = 0, sumEven = 0;

    cout << "Enter a positive integer: ";
    cin >> number;
    for (size_t i = 0; i < number.length(); ++i) {
        int digit = number[i] - '0';

        if ((i + 1) % 2 == 0) { 
            sumEven += digit;
        } else { 
            sumOdd += digit;
        }
    }

    cout << "Sum of digits at odd positions: " << sumOdd << endl;
    cout << "Sum of digits at even positions: " << sumEven << endl;

    return 0;
}