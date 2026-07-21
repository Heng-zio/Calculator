#include <iostream>
using namespace std;

// Renamed functions to avoid conflicts with std::plus and std::minus
double addNumbers(double a, double b) {
    return a + b;
}

double subtractNumbers(double a, double b) {
    return a - b;
}
double multiplyNumbers(double a, double b) {
    return a * b;
}
double divisionNumbers(double a, double b){
    return a / b;
}
double modulusNumbers(double a, double b) {
    return (int)a % (int)b;
}

int main () {
    int choice;
    cout << "Enter your choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulus): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << addNumbers(a, b) << endl;
            break;
        } 
        case 2: { 
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtractNumbers(a, b) << endl;
            break;
        }
        case 3: {
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << multiplyNumbers(a, b) << endl;
            break;
        }
        case 4: {
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << divisionNumbers(a, b) << endl;
            break;
        }
        case 5: {
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << modulusNumbers(a, b) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
