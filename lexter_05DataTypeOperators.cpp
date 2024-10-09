#include <iostream>
using namespace std;

int main() {
    int num1, num2;


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;

 
    if (num2 != 0) {
        cout << "Quotient: " << num1 / num2 << endl;
        cout << "Remainder: " << num1 % num2 << endl;
    } else {
        cout << "Quotient: Undefined (cannot divide by zero)" << endl;
        cout << "Remainder: Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}