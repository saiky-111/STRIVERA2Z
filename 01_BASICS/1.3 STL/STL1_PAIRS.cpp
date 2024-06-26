#include <bits/stdc++.h>
using namespace std;

// Function to explain the usage of pairs in C++
void explainPair() {
    // Initialize a simple pair with two integers
    pair<int, int> p1 = {1, 3};
    // Access and print the elements of the pair
    cout << p1.first << " " << p1.second << endl; // prints: 1 3

    // Initialize a nested pair: the second element is another pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    // Access and print the elements of the nested pair
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl; // prints: 1 3 2

    // Initialize an array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    // Access and print the second element of the second pair in the array
    cout << arr[1].second << endl; // prints: 5
}

int main() {
    // Call the function to explain pairs
    explainPair();
    return 0;
}
