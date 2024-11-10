#include <iostream>

using namespace std;

int productOfDigits(int n) {
    int product = 1;
    
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    
    return product;
}

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    int result = productOfDigits(n);
    cout << "The product of the digits of " << n << " is: " << result << endl;

    return 0;
}