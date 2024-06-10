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