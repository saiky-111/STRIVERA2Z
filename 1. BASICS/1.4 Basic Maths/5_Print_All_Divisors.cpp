#include <bits/stdc++.h>
using namespace std;

// Function to print all divisors of n
void printDivisors(int n) {
    if (n <= 0) { // Handle non-positive integers
        cout << "Invalid input, please enter a positive integer." << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " "; // Print the divisor
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Read an integer from the user
    printDivisors(n); // Call the function to print divisors
    return 0; // Indicate that the program ended successfully
}

//Here time complexity is O(N). We need to do it better.

INput:
28
Output:
1 2 4 7 14 28 


Input:
0
Output:
Invalid input, please enter a positive integer.


Input:
-5
Output:
Invalid input, please enter a positive integer.




// Method 2:


#include <bits/stdc++.h>
using namespace std;

// Function to print all divisors of n
void printDivisors(int n) {
    // Check for non-positive input
    if (n <= 0) { 
        cout << "Invalid input, please enter a positive integer." << endl;
        return;
    }

    vector<int> ls;   // Vector to store divisors
    
    // Iterate from 1 to sqrt(n)
    
    //for (int i = 1; i <= sqrt(n); i++) --> this could also be written, but for time complexity purposes, we write the below code
//i * i <= n is constant-time operation (O(1))  // but here readability is less
//i <= sqrt(n) is a logarithmic-time operation (O(log(n))) //here readibility is more

//i.e 6*6 <= 36
// 7*7  <=  36 //false
//below loop runs for O(sqrt(n)) times
    for (int i = 1; i *i <= n; i++) {
        if (n % i == 0) { // Check if i is a divisor of n
            ls.push_back(i); // Add i to the vector
            if ((n / i) != i) { // Avoid adding the square root twice
                ls.push_back(n / i); // Add the corresponding divisor n / i
            }
        }
    }
//internal sorting function takes O(n * log(n)) , where n is the number of factors
    sort(ls.begin(), ls.end()); // Sort the vector of divisors

    // Print the sorted divisors
    //taking number of factors time to print it
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl; // Print a newline at the end
}

//overall time complexity is O(sqrt(n)) + O(no of factors * log(no of factors)) +  number of factors time to print it = O(sqrt(n))

int main() {
    int n;
    cin >> n; // Read an integer from the user
    printDivisors(n); // Call the function to print divisors
    return 0; // Indicate that the program ended successfully
}



// for Input:
// 28
// Output:
// 1 2 4 7 14 28 


// Input:
// 12
// Output:
// 1 2 3 4 6 12 


// Input:
// 1
// Output:
// 1


// Input:
// -5 or 0
// Output:
// Invalid input, please enter a positive integer.

