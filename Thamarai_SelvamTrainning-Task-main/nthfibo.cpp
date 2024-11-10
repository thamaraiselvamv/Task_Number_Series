#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;
    return 0;
}