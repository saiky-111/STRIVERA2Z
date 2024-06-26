#include <bits/stdc++.h>
using namespace std;

// Function to print a pattern of numbers
void Pattern4(int n) {
    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // Loop through each column in the current row from 1 to i
        for (int j = 1; j <= i; j++) {
            // Print the current row number followed by a space
            cout << i << " ";
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
        Pattern4(n);
    }

    // Return 0 to indicate successful execution
    return 0;
}



// If the Input is:
// 2
// 3
// 5
// Output:
// 1 
// 2 2 
// 3 3 3 
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 


// If the Input is:
// 1
// 9
// Output:
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 
// 7 7 7 7 7 7 7 
// 8 8 8 8 8 8 8 8 
// 9 9 9 9 9 9 9 9 9 
