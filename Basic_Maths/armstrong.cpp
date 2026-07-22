#include <iostream>
#include <cmath> // Required for the pow() function

using namespace std;

int main() {
    int originalNum, num, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> originalNum;

    // Store the original number to check later
    num = originalNum;

    // 1. Count the number of digits
    while (num != 0) {
        num /= 10;
        n++;
    }

    // Reset num to the original value for the next loop
    num = originalNum;

    // 2. Calculate sum of powers
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        
        // Add the digit raised to the power of digit count (n)
        result += pow(remainder, n); 
        
        num /= 10; // Remove the last digit
    }

    // 3. Check if the result matches the original number
    // We cast result to int because pow returns a double
    if ((int)result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}