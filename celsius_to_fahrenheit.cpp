#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Formula: (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << celsius << "degrees Celsius is equal to" << fahrenheit << "degrees Fahrenheit." << endl;

    return 0;
}    
