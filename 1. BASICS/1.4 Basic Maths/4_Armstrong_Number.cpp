// An Armstrong number of three digits is an integer such that
//  the sum of the cubes of its digits is equal to the number itself.

#include <bits/stdc++.h>
using namespace std;


int armStrongNumber(int n) {


    int sum = 0; 
    int dup = n; 

    
    while (n > 0) {
        int lastDigit = n % 10;
        sum=sum+(lastDigit*lastDigit*lastDigit);
        n = n / 10;
    }

    
    if (dup == sum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;
    cin >> n;
    if (armStrongNumber(n)) {
        cout << "true" << endl; 
    } else {
        cout << "false" << endl;
    }

    return 0; 
}





//Armstrong number  (also known as a Narcissistic number) 
//is n digit number where the sum of
 //nth power of its each digits is equal to the same n digit number.

// Method 2:

#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number n is an Armstrong number
int armStrongNumber(int n) {
    if (n < 0) {
        return 0; // Negative numbers are not considered Armstrong numbers
    }

    int sum = 0;
    int dup = n;
    int numDigits = 0;

    // Calculate the number of digits
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        numDigits++;
    }

    // Calculate the sum of each digit raised to the power of numDigits
    temp = n;
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum = sum + pow(lastDigit, numDigits); // Use pow to generalize for any number of digits
        temp = temp / 10;
    }

    // Check if the original number and the computed sum are the same
    if (dup == sum) {
        return 1; // The number is an Armstrong number
    } else {
        return 0; // The number is not an Armstrong number
    }
}

int main() {
    int n;
    cin >> n; // Read an integer from the user

    // Call armStrongNumber with the input number
    if (armStrongNumber(n)) {
        cout << "true" << endl; // The number is an Armstrong number
    } else {
        cout << "false" << endl; // The number is not an Armstrong number
    }

    return 0; // Indicate that the program ended successfully
}


// If Input is:
// 153
// Output:
// true

// If Input is:
// 9474
// Output:
// true

// If Input is:
// 9475
// Output:
// false

// If Input is:
// 0
// Output:
// true