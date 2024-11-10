#include <iostream>

using namespace std;

int digitalRootIterative(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int digitalRootModulo(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + (n - 1) % 9;
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    int rootIterative = digitalRootIterative(number);
    int rootModulo = digitalRootModulo(number);

    cout << "Digital root (Iterative method) of " << number << " is: " << rootIterative << endl;
    cout << "Digital root (Modulo method) of " << number << " is: " << rootModulo << endl;

    return 0;
}