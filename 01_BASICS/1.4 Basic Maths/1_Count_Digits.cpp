//Method 1:


#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits in a given number n
int CountDigits(int n) {
    int cnt = 0; // Initialize digit count to 0

    // Special case for 0, which has 1 digit
    if (n == 0) {
        return 1;
    }

    // Handle negative numbers by taking the absolute value
    n = abs(n);

    // Loop to count digits
    while (n > 0) {
        int LastDigit = n % 10; // Get the last digit (not actually used here)
        cnt = cnt + 1; // Increment the digit count
        n = n / 10; // Remove the last digit from the number
    }
    return cnt; // Return the total count of digits
}

int main() {
    int n;
    cin >> n; // Read an integer from the user

    int digitCount = CountDigits(n); // Call CountDigits and store the result

    // Print the result to the console
    cout << "Number of digits: " << digitCount << endl;

    return 0; // Indicate that the program ended successfully
}





// If Input is:
//  70986
//  Output:
//  Number of digits: 5

// If input is:
// 0
// Output:
// Number of digits: 1



Method 2:

#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits in a given number n
int CountDigits(int n) {
    if (n == 0) {
        return 1; // Special case for 0, which has 1 digit
    }

    // Handle negative numbers by taking the absolute value
    n = abs(n);
    
    // Calculate the number of digits using log10
    int digits = (int)log10(n) + 1;

    return digits; // Return the total count of digits
}

int main() {
    int n;
    cin >> n; // Read an integer from the user

    int digitCount = CountDigits(n); // Call CountDigits and store the result

    // Print the result to the console
    cout << "Number of digits: " << digitCount << endl;

    return 0; // Indicate that the program ended successfully
}



// If Input is:
//  70986
//  Output:
//  Number of digits: 5

// If input is:
// 0
// Output:
// Number of digits: 1

// If input is:
// -12345
// Output:
// Number of digits: 5
