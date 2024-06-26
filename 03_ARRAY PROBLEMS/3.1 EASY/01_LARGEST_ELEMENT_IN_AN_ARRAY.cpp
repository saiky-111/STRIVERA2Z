#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array
int largestElement(vector<int> &arr, int n) {
    if (n == 0) {
        // Handle edge case where the array is empty
        cout << "Array is empty." << endl;
        return INT_MIN; // Return the smallest possible integer
    }

    int largest = arr[0]; // Initialize largest with the first element

    // Loop through the array starting from the second element
    //The loop in largestElement should start from 1 since largest is already
    // initialized with the first element.
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if current element is greater
        }
    }

    return largest; // Return the largest element
}

int main() {
    int n;
    cin >> n; // Read the size of the array

    vector<int> arr(n); // Declare a vector of size n

    // Read n elements into the vector
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and print the largest element in the vector
    cout << largestElement(arr, n) << endl;

    return 0; // Indicate that the program ended successfully
}




// If input:
// 5
// 3 -1 4 1 2

// Output:
// 4


// If input:
// 0

// Output:

// Array is empty.
// -2147483648
