#include <bits/stdc++.h>
using namespace std;

// Function to print an inverted right-angled triangle pattern of '*' characters
void Pattern5(int n) {
    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // Loop to print '*' characters in the current row
        // The number of '*' characters decreases with each row
        for (int j = 0; j < n - i + 1; j++) {
            cout << "*" << " ";
        }
        // Print a newline character after each row
        cout << endl;
    }
}

int main() {
    // Variable to store the number of test cases
    int t;
    // Read the number of test cases
    cin >> t;

    // Loop through each test case
    for (int i = 0; i < t; i++) {
        // Variable to store the size of the pattern
        int n;
        // Read the size of the pattern for the current test case
        cin >> n;
        // Call the function to print the pattern
        Pattern5(n);
    }

    // Return 0 to indicate successful execution
    return 0;
}


// If Input is:
// 1
// 5
// Output:
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 


// If Input is:
// 2
// 5
// 9
// Output:
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// * * * * * * * * * 
// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
