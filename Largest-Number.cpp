#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Compare the numbers and display the largest
    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } else {
        cout << "The largest number is: " << num2 << endl;
    }

    return 0;
}
