//Iterative Solution

#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search on a sorted vector
int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); // Get the size of the vector
    int low = 0, high = n - 1; // Initialize the low and high pointers

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the mid index to avoid overflow
        if (nums[mid] == target) {
            return mid; // If the target is found, return the index
        } else if (target > nums[mid]) {
            low = mid + 1; // Move the low pointer up if the target is greater
        } else {
            high = mid - 1; // Move the high pointer down if the target is smaller
        }
    }
    return -1; // Return -1 if the target is not found
}


// Function to check if the array is sorted
bool isSorted(const vector<int>& v) {         //Using a reference (&) avoids copying the entire vector,
                                               // and const ensures that the function does not modify the vector.
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1]) {   
            return false; // Return false if any element is smaller than the previous one
        }
    }
    return true; // Return true if the array is sorted
}

int main() {
    int n;
    cin >> n; // Read the size of the vector

    vector<int> v(n); // Declare a vector of size n
    // Use a range-based loop to read the elements of the vector
    for (auto& it : v) {
        cin >> it; // Read each element
    }

    // Sort the vector to ensure it is sorted before binary search
    //Solution 1: Sort the Array Before Binary Search
    //sort(v.begin(), v.end());

    //Solution 2: Check if the array is sorted and inform the user if it's not.
if (!isSorted(v)) {
        cout << "The array is not sorted." << endl;
        return 1;
    }

    int target;
    cin >> target; // Read the target element to search for

    // Call the binary search function
    int ind = binarySearch(v, target);

    // Output the result of the binary search
    if (ind == -1) {
        cout << "The target is not present." << endl;
    } else {
        cout << "The target is at index: " << ind << endl;
    }

    return 0;
}


// int main()
// {
//     vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
//     int target = 6;
//     int ind = binarySearch(a, target);
//     if (ind == -1) cout << "The target is not present." << endl;
//     else cout << "The target is at index: "
//                   << ind << endl;
//     return 0;
// }

//or we could have given hard coded input as above.