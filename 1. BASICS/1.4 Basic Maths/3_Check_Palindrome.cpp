#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number n is a palindrome
int checkPalindrome(int n) {
    if (n < 0) {
        return 0; // Negative numbers are not considered palindromes
    }

    int revNum = 0; 
    int dup = n; // Store the original number

    // Reverse the number
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    // Check if the original number and the reversed number are the same
    if (dup == revNum) {
        return 1; // The number is a palindrome
    } else {
        return 0; // The number is not a palindrome
    }
}

int main() {
    int n;
    cin >> n; // Read an integer from the user

    // Call checkPalindrome with the input number
    if (checkPalindrome(n)) {
        cout << "true" << endl; // The number is a palindrome
    } else {
        cout << "false" << endl; // The number is not a palindrome
    }

    return 0; // Indicate that the program ended successfully
}





// If Input is:
// 121
// Output:
// true

// If Input is:
// -121
// Output:
// false

// If Input is:
// 0
// Output:
// true

// If Input is:
// 985
// Output:
// false