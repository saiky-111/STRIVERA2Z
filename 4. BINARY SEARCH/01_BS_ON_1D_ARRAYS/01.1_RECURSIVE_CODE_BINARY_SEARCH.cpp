#include <bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch(vector<int>& nums, int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: if low index exceeds high, target is not found
    }
    int mid = low + (high - low) / 2; // Prevents overflow compared to (low + high) / 2
    if (nums[mid] == target) {
        return mid; // Target found, return the index
    } else if (target > nums[mid]) {
        return binarySearch(nums, mid + 1, high, target); // Search in the right half
    } else {
        return binarySearch(nums, low, mid - 1, target); // Search in the left half
    }
}

// Function to initiate the binary search
//This is the function main will call
//Given in the codestudio function
int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main() {
    int n;
    cin >> n; // Read the number of elements in the vector
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read each element into the vector
    }
    int target;
    cin >> target; // Read the target value to be searched

    int result = search(nums, target); // Perform the binary search
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}

// -----------------------------------------------------------------------------------------------

//Follow this below method only.
//Method 2:
#include <bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch(vector<int>& nums, int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: if low index exceeds high, target is not found
    }
    int mid = low + (high - low) / 2; // Prevents overflow compared to (low + high) / 2
    if (nums[mid] == target) {
        return mid; // Target found, return the index
    } else if (target > nums[mid]) {
        return binarySearch(nums, mid + 1, high, target); // Search in the right half
    } else {
        return binarySearch(nums, low, mid - 1, target); // Search in the left half
    }
}

int main() {
    int n;
    cin >> n; // Read the number of elements in the vector
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read each element into the vector
    }
    int target;
    cin >> target; // Read the target value to be searched

    int result = binarySearch(nums, 0, nums.size() - 1, target); // Perform the binary search
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
