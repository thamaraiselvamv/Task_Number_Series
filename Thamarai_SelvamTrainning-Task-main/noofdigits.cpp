#include <iostream>
using namespace std;
int main() {
    long long number; 
    int count = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

   
    do {
        count++;
        number /= 10; 
    } while (number > 0);

    cout << "The number of digits is: " << count << endl;

    return 0;
}
