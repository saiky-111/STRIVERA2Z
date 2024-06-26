#include<bits/stdc++.h>
using namespace std;

// Function to print a Triangle pattern of stars
void Pattern7(int n) {
    for(int i = 0; i < n; i++) {
        // Loop to print spaces before stars (decreasing spaces)
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        // Loop to print stars (increasing stars)
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        
        // Loop to print spaces after stars (decreasing spaces)
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    // Loop through each test case
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n; // Size of the triangle
        Pattern7(n); // Call function to print triangle pattern
    }
    return 0;
}




// If Input is:
// 2
// 3
// 5
// Output:
//   *
//  ***
// *****
//     *
//    ***
//   *****
//  *******
// *********



// if input is:
// 1
// 9
// Output:
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
