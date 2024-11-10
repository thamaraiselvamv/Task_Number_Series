#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int result = sumOfNaturalNumbers(n);
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    return 0;
}