#include <bits/stdc++.h>
using namespace std;

// Function to find the lower bound of target in a sorted array
int upperBound(vector<int> arr, int target) {
    int low = 0; // Initialize low to the start of the array
    int high = arr.size() - 1; // Initialize high to the end of the array
    int ans = arr.size(); // Initialize ans to the size of the array (if no element is found, this remains)

    // Binary search to find the lower bound
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to avoid overflow
        if (arr[mid] > target) {
            ans = mid; // Potential answer found, update ans
            high = mid - 1; // Move high to mid - 1 to search in the left half //i.e look for more smaller index on left
        } else {
            low = mid + 1; // Move low to mid + 1 to search in the right half
        }
    }
    return ans; // Return the index of the lower bound
}

int main() {
    int n;
    cin >> n; // Read the number of elements
    vector<int> v(n); // Declare a vector of size n

    // Correct way to read elements into the vector
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; // Read each element into the vector
    }

    int target;
    cin >> target; // Read the target value

    // Call the lowerBound function and store the result
    int result = upperBound(v, target);

    // Print the result
    cout << "UpperBound is " << result << endl;

    return 0;
}


// // Input/output:

// ->Empty Array: 
// An empty array will result in ans being the size of the array, which is 0.

// Single Element: 
// The function will correctly find the lower bound for an array with a single element.

// All Elements Same:
//  The function will find the first occurrence of the target if all elements are the same.

// Target Not Present:
//  The function will return the index where the target would be inserted to maintain sorted order.

// Target Smaller Than All Elements:
//  The function will return 0, as the target is smaller than the smallest element.

// Target Larger Than All Elements:
//  The function will return the size of the array, indicating the target is larger than all elements.
