
//Method:2
//Solution without Using Lower Bound and Upper Bound
//Plain Binary search i.e finding first and last occurences seperately.

#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of target in a sorted array
int firstOccurrence(vector<int> arr, int target) {
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
int lastOccurrence(vector<int> arr, int target) {
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int target) {
    int first = firstOccurrence(arr, target); // Find first occurrence of the target
   
    if (first == -1) {
        return {-1, -1}; 
        }//if first Element is not found, return -1 for both first and last positions
    //Do not waste another o(log n) time, for searching for the last Occurence
    //coz if first is not there , there will be no last.

    int last = lastOccurrence(arr, target); // Find last occurrence of the target
    return {first, last}; // Return the first and last positions of the target
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

    // Call the firstAndLastPosition function and store the result
    pair<int, int> result = firstAndLastPosition(v, target);

    // Print the result
    cout << "First Position: " << result.first << ", Last Position: " << result.second << endl;

    return 0;
}



// Time Complexity:

//     First Occurrence: O(log N)
//     Last Occurrence: O(log N)
//     Overall: O(log N)
