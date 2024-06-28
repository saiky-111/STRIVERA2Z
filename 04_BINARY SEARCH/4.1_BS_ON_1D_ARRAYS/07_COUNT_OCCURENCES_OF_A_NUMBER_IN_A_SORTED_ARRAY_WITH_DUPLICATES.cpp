
#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of target in a sorted array
int firstOccurrence(const vector<int>& arr, int target) {
    int low = 0; // Initialize low to the start of the array
    int high = arr.size() - 1; // Initialize high to the end of the array
    int first = -1; // Initialize first to -1 to indicate not found

    // Binary search to find the first occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to avoid overflow
        if (arr[mid] == target) {
            first = mid; // Potential answer found, update first
            high = mid - 1; // Move high to mid - 1 to search in the left half
        } else if (arr[mid] > target) {
            high = mid - 1; // Move high to mid - 1 to search in the left half
        } else {
            low = mid + 1; // Move low to mid + 1 to search in the right half
        }
    }
    return first; // Return the index of the first occurrence
}

// Function to find the last occurrence of target in a sorted array
int lastOccurrence(const vector<int>& arr, int target) {
    int low = 0; // Initialize low to the start of the array
    int high = arr.size() - 1; // Initialize high to the end of the array
    int last = -1; // Initialize last to -1 to indicate not found

    // Binary search to find the last occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to avoid overflow
        if (arr[mid] == target) {
            last = mid; // Potential answer found, update last
            low = mid + 1; // Move low to mid + 1 to search in the right half
        } else if (arr[mid] > target) {
            high = mid - 1; // Move high to mid - 1 to search in the left half
        } else {
            low = mid + 1; // Move low to mid + 1 to search in the right half
        }
    }
    return last; // Return the index of the last occurrence
}

// Function to find the first and last position of target in a sorted array
pair<int, int> firstAndLastPosition(const vector<int>& arr, int target) {
    int first = firstOccurrence(arr, target); // Find first occurrence of the target
   
    if (first == -1) {
        return {-1, -1}; 
        } // If the first element is not found, return {-1, -1} for both first and last positions
    // Do not waste another O(log N) time searching for the last occurrence
    // because if the first is not there, there will be no last.

    int last = lastOccurrence(arr, target); // Find last occurrence of the target
    return {first, last}; // Return the first and last positions of the target
}

// Function to count the occurrences of the target in the sorted array
int countOccurrences(const vector<int>& arr, int target) {
    pair<int, int> positions = firstAndLastPosition(arr, target); // Get the first and last positions
    if (positions.first == -1) return 0; // If the target is not found, return 0
    return positions.second - positions.first + 1; // Calculate the number of occurrences
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

    // Assuming the array is sorted, if not sort it using sort(v.begin(), v.end());

    // Call the countOccurrences function and store the result
    int result = countOccurrences(v, target);

    // Print the result
    cout << "Number of occurrences of " << target << ": " << result << endl;

    return 0;
}


// Time Complexity:

//     First Occurrence: O(log N)
//     Last Occurrence: O(log N)
//     Overall: O(log N)
