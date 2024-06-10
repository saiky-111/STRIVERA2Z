//Method: 1
// This approach is different from the typical prime-checking method 
// but still works correctly to determine if a number is prime by counting its divisors.

#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool checkPrime(int n) {
    if (n <= 1) { // Handle edge case for numbers less than 2
        return false;
    }
    int cnt = 0; // Initialize count of divisors

    // Iterate from 1 to sqrt(n) //since the goalis to count all divisors, including both 1 and n.
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) { // Check if i is a divisor of n
            cnt++; // Increment count for divisor i
            if ((n / i) != i) { // Avoid adding the square root twice
                cnt++; // Increment count for the corresponding divisor n / i
            }
        }
    }

    return cnt == 2; // A prime number has exactly two divisors: 1 and itself
}

int main() {
    int n;
    cin >> n; // Read an integer from the user
    if (checkPrime(n)) { // Call the function to check if n is prime// if the cnt function has returned value of 2 , it is true, otherwise false
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0; // Indicate that the program ended successfully
}




Mehtod 2:
By using a Flag (Preffered)


#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool checkPrime(int n) {
    if (n <= 1) { // Handle edge case for numbers less than 2
        return false;
    }

    bool isPrime = true; // Flag to indicate if n is prime

    // Iterate from 2 to sqrt(n)     //***Starting with 2 to check prime numbers, since every number is divisible by 1****/
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { // Check if i is a divisor of n
            isPrime = false; // Set the flag to false if a divisor is found
            break; // No need to check further if we found a divisor
        }
    }

    return isPrime; // Return the flag indicating if n is prime
}

int main() {
    int n;
    cin >> n; // Read an integer from the user
    if (checkPrime(n)) { // Call the function to check if n is prime
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0; // Indicate that the program ended successfully
}
