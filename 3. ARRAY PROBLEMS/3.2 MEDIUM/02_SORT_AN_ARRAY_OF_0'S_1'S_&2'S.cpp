#include <bits/stdc++.h>
using namespace std;

// Function to sort an array of 0s, 1s, and 2s
void sortArray(vector<int> &arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    // Dutch National Flag algorithm
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]); // Move 0s to the beginning
        } else if (arr[mid] == 1) {
            mid++; // Leave 1s in the middle
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[high--]); // Move 2s to the end
        } else {
            cout << "Invalid input, array should only contain 0, 1, and 2." << endl;
            return;
        }
    }
}

int main() {
    int n;
    cin >> n; // Read the size of the array

    if (n < 0) {
        cout << "Invalid input, size of the array cannot be negative." << endl;
        return 0;
    }

        // Check for empty array case
    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    vector<int> arr(n); // Declare a vector of size n

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // Sort the array
    sortArray(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Print a newline at the end

    return 0;
}




// If input is:
// 6
// 0 1 2 1 0 2

// output:
// 0 0 1 1 2 2 


// If the input is:
// 0
// Output:
// Array is empty.



// If the input is:
// 4
// 0 1 3 2

// Output:
// Invalid input, array should only contain 0, 1, and 2.

