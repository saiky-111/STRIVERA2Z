#include <bits/stdc++.h>
using namespace std;

// Function to reverse the digits of a given number n
int ReverseNumber(int n) {
    int revNum = 0; // Initialize the reversed number to 0
    bool isNegative = n < 0; // Check if the number is negative

    if (isNegative) {
        n = -n; // Make the number positive for reversal(i.e.If the number is negative, it is made positive using n = -n;)
    }

    while (n > 0) {
        int LastDigit = n % 10; // Get the last digit
        revNum = (revNum * 10) + LastDigit; // Append the last digit to the reversed number
        n = n / 10; // Remove the last digit from the original number
    }

    if (isNegative) {
        revNum = -revNum; // Restore the negative sign if the original number was negative
    }

    return revNum; // Return the reversed number
}

int main() {
    int n;
    cin >> n; // Read an integer from the user

    int num = ReverseNumber(n); // Call ReverseNumber and store the result

    cout << "Reverse Number is: " << num << endl; // Print the reversed number

    return 0; // Indicate that the program ended successfully
}





// For input:
//  -12345
//  Output:
//  Reverse Number is: -54321

// For input:
//  0
//  Output:
// Reverse Number is: 0


//  For input:
// 70986
//  Output:
// Reverse Number is: 68907

