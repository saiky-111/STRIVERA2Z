#include <bits/stdc++.h>
using namespace std;

int cnt = 0; // Global variable to keep track of count

// Recursive function to print the value of cnt until it reaches 3
void print() {
    if (cnt == 3) { // Base case: if cnt is 3, stop recursion
        return;
    }
    
    cout << cnt << endl; // Print the current value of cnt
    cnt++; // Increment cnt
    
    print(); // Recursive call to print() again
}

int main() {
    print(); // Call the recursive print function
    return 0; // Indicate that the program ended successfully
}




Output:
0
1
2


<!--------------------------------------------------->
Method: 2

// if we take user input , and then print the numbers, in recursive way:

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print the value of cnt until it reaches maxCount
void print(int cnt, int maxCount) {
    if (cnt == maxCount) { // Base case: if cnt reaches maxCount, stop recursion
        return;
    }
    
    cout << cnt << endl; // Print the current value of cnt
    cnt++; // Increment cnt
    
    print(cnt, maxCount); // Recursive call to print() with updated cnt
}

int main() {
    int n;
    cin >> n; // Read an integer from the user as the limit

    print(0, n); // Call the recursive print function starting from 0 up to n (exclusive)
    
    return 0; // Indicate that the program ended successfully
}



// Now, if Input is:
// 7
// Output:
// 0
// 1
// 2
// 3
// 4
// 5
// 6
