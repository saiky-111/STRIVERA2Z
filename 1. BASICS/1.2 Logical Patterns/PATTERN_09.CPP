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

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
Pattern7(n);// add these 2 lines only
Pattern8(n);
}
    return 0;
}




//we just combined the codes of pattern 7 and pattern 8

// If input is:
// 1
// 5
// output:
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *


// Input:
// 2
// 4
// 9
// Output:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *
