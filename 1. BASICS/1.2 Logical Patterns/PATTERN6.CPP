#include <bits/stdc++.h>
using namespace std;

// Function to print a pattern of numbers
void Pattern6(int n) {
    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // Loop to print numbers in the current row
        // The number of elements in the row decreases with each row
        for (int j = 1; j <= n - i + 1; j++) {
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
        Pattern6(n);
    }

    // Return 0 to indicate successful execution
    return 0;
}




// If Input is:
// 2
// 5
// 9
// Output:
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 



// Input:
// 4
// 3
// 6
// 3
// 9
// Output:
// 1 2 3 
// 1 2 
// 1 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// 1 2 3 
// 1 2 
// 1 
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
