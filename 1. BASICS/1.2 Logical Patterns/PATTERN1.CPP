#include <bits/stdc++.h>
using namespace std;

// Function to print a square pattern of '*' characters
void Pattern1(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Loop through each column in the current row
        for (int j = 0; j < n; j++) {
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
        // Read the size of the pattern
        cin >> n;
        // Call the function to print the pattern
        Pattern1(n);
    }

    return 0;
}


// if input is: 2 3 5
// output:
// * * * 
// * * * 
// * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 



// if input is: 1 5
// output:
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
