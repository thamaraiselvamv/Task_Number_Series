#include <iostream>

using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int hcfOfThree(int num1, int num2, int num3) {
    return hcf(hcf(num1, num2), num3);
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter three positive integers: ";
    cin >> num1 >> num2 >> num3;
    
    if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
        cout << "Please enter positive integers." << endl;
        return 1;
    }
    
    int result = hcfOfThree(num1, num2, num3);
    cout << "The HCF of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

    return 0;
}