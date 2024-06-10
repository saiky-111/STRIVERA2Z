#include <bits/stdc++.h>
using namespace std;

// Function to print a right-angled triangle pattern of '*' characters
void Pattern2(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Loop through each column in the current row
        for (int j = 0; j <= i; j++) {
            // Print '*' followed by a space
            cout << "* ";
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
        Pattern2(n);
    }

    return 0;
}


// If Input is: 
// 2
// 3
// 5
// Output:
// * 
// * * 
// * * * 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 


// If Input is: 
// 1
// 6
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
