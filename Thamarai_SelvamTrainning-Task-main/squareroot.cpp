#include <iostream>
#include <iomanip> 

using namespace std;

double squareRoot(double number) {
    if (number < 0) {
        cout << "Square root of negative number is not defined." << endl;
        return -1;
    }
    if (number == 0 || number == 1) {
        return number; 
    }

    double precision = 0.00001; 
    double guess = number / 2.0; 

    while (abs(guess * guess - number) > precision) {
        guess = (guess + number / guess) / 2.0; 
    }

    return guess;
}

int main() {
    double number;

    cout << "Enter a non-negative number: ";
    cin >> number;

    double result = squareRoot(number);

    if (result != -1) {
        cout << "The square root of " << number << " is: " << setprecision(5) << result << endl;
    }

    return 0;
}