#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}