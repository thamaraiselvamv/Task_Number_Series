#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers." << endl;
        return 1;
    }

    int result = lcm(num1, num2);
    cout << "The Least Common Multiple of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}