#include <bits/stdc++.h>
using namespace std;

// Function to print a pattern of numbers
void Pattern3(int n) {
    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // Loop through each column in the current row from 1 to i
        for (int j = 1; j <= i; j++) {
            // Print the current column number followed by a space
            cout << j << " ";
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
        Pattern3(n);
    }

    // Return 0 to indicate successful execution
    return 0;
}




// If the input is:
// 1
// 6
// Output:
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 


// If the input is:
// 2
// 3
// 7
// Output:
// 1 
// 1 2 
// 1 2 3 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 7 
