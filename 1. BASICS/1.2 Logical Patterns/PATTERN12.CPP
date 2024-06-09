#include<bits/stdc++.h>
using namespace std;

// Function to print an inverted triangle pattern of stars
void Pattern8(int n) {
    for(int i = 0; i < n; i++) {
        // Loop to print spaces before stars
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        
        // Loop to print stars
        for(int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        //for space
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    // Move to the next line after each row
    cout<<endl;
}
}
int main() {
    int t;
    cin >> t; // Number of test cases
    
    // Loop through each test case
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n; // Height of the inverted triangle
        Pattern8(n); // Call function to print inverted triangle pattern
    }
    return 0;
}


If Input is:
1
5
Output:
*********
 *******
  *****
   ***
    *


If input is:
2
4
5
Output:
*******
 ***** 
  ***  
   *   
*********
 ******* 
  *****  
   ***   
    *    