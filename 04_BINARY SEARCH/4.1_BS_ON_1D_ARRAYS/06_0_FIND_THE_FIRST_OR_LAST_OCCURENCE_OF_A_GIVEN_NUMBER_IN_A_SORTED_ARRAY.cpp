
//Method:1
//Solution by Using Lower Bound and Upper Bound

#include <bits/stdc++.h>
using namespace std;

// Function to find the lower bound of target in a sorted array
int lowerBound(vector<int> arr, int target) {
    int low = 0; // Initialize low to the start of the array
    int high = arr.size() - 1; // Initialize high to the end of the array
    int ans = arr.size(); // Initialize ans to the size of the array (if no element is found, this remains)

    // Binary search to find the lower bound
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to avoid overflow
        if (arr[mid] >= target) {
            ans = mid; // Potential answer found, update ans
            high = mid - 1; // Move high to mid - 1 to search in the left half
        } else {
            low = mid + 1; // Move low to mid + 1 to search in the right half
        }
    }
    return ans; // Return the index of the lower bound
}

// Function to find the upper bound of target in a sorted array
int upperBound(vector<int> arr, int target) {
    int low = 0; // Initialize low to the start of the array
    int high = arr.size() - 1; // Initialize high to the end of the array
    int ans = arr.size(); // Initialize ans to the size of the array (if no element is found, this remains)

    // Binary search to find the upper bound
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to avoid overflow
        if (arr[mid] > target) {
            ans = mid; // Potential answer found, update ans
            high = mid - 1; // Move high to mid - 1 to search in the left half
        } else {
            low = mid + 1; // Move low to mid + 1 to search in the right half
        }
    }
    return ans; // Return the index of the upper bound
}


// Function to find the first and last position of target in a sorted array
pair<int, int> firstandLastPosition(vector<int>& arr, int target) {
    int lb = lowerBound(arr, target);
    // Check if the lower bound index is equal to the size of the array or if the element at the lower bound index is not equal to the target
    if (lb == arr.size() || arr[lb] != target) {
        return {-1, -1}; // Element is not found, return -1 for both first and last positions
    }
    return {lb, upperBound(arr, target) - 1}; // Return the first and last positions of the target
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Read the number of elements
    vector<int> v(n); // Declare a vector of size n

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; // Read each element into the vector
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target; // Read the target value

    // Sort the array before using binary search functions
    //sort(v.begin(), v.end());
    //We'll assume the array is sorted

    // Call the firstandLastPosition function and store the result
    pair<int, int> result = firstandLastPosition(v, target);

    // Print the result
    cout << "First Position: " << result.first << ", Last Position: " << result.second << endl;

    return 0;
}

// Time Complexity:

//     The sorting step takes O(N log N).//If it already sorted, we can ignore it
//     Each binary search (for lower bound and upper bound) takes O(log N).
//     Overall, the function runs in O(N log N) due to sorting. If the array 
//is already sorted, the time complexity for finding the positions is O(log N).