#include <iostream>

using namespace std;

void findDivisors(int n) {
    int divisors[100]; 
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors[count++] = i;
        }
    }

    cout << "The divisors of " << n << " are: ";
    for (int i = 0; i < count; ++i) {
        cout << divisors[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    findDivisors(n);
    return 0;
}
