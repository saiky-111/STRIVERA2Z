#include <bits/stdc++.h> //takes more time to compile but it's okk
#include <iostream>      //this library allows us to take inputs and give output.
#include <math.h>        //mathematical function
#include <string>        // to use string function
using namespace std;
int main()
{
    cout << "Hey Saikat!" << endl
         << "hey saiky!" << "\n";
    cout << "Hey Dhibar!"; // cout is a function that exists under std.
    int x;
    cin >> x;
    cout << "Hey Saikat!" << x;
    // int
    int x = 10;

    // long
    long x = 15;
    cin >> x;

    long long x = 150000000;

    // int --> 4 bytes  --> Range is: -2,147,483,648 to 2,147,483,647 // beyond this it cannot store
    // i.e integer will be from -10^9 to 10^9 .
    // ------------------------------------------
    //  unsigned short ---> 2 bytes--->  Range of values:  0 to 65,535

    // long --> 4 bytes  --> Range is: -2,147,483,648 to 2,147,483,647
    // i.e long will be from -10^12 to 10^12 .
    // -------------------------------------------
    // unsigned long  ---->  4 bytes  ---> Range is: 0 to 4,294,967,295

    // long long ----->  8 bytes  ---->  Range is: -9,223,372,036,854,775,808  to  9,223,372,036,854,775,807
    // i.e long long will be from -10^18 to 10^18 .

    // ------------------------------------------------------------------------

    // float ------>  4 byte  ---->  Range is: 1.2E-38  to  3.4E+38

    // double  ----->  8 byte  ------>  Range is: 2.3E-308  to  1.7E+308

    // long double  -----> 12 byte ---->  Range is: 3.4E-4932  to  1.1E+4932

    float x = 5.6; // to store decimals
    float y = 5;

    cout << "Value of y:" << y; // Output is :5  (even if it's a integer, it will be printed)

    double y = 5;

    // --------------------------------------------------------------

    // String and Getline
    string s;
    cin >> s;  // Input : Hey Saikat
    cout << s; // Output: Hey

    // --------------------------------------------------------

    // Another way:
    string s1;
    string s2;
    cin >> s1 >> s2;         // Input: Hey Saikat
    cout << s1 << " " << s2; // First, s1 is picked up as Hey ,
    //  then s2 is picked up as Saikat, and then we print it with a space.
    // When cin sees any space, we have to take another string to take the input

    // -----------------------------------------------------------

    // To take everything, including the spaces , use Getline.
    string str;
    getline(cin, str); // getline just prints till the line break.
    // Input : Hey Striver I am Cool
    //        Hey Raj

    cout << str; // Output: Hey Striver I am Cool

    // -----------------------------------------------------------
    // Characters
    char ch;
    cin >> ch;  // Input: h
    cout << ch; // Output: h

    // -------------------------------------------------------------

    char ch = '9'; //  Inside Single quote , a character is written
    cout << ch;

    // -------------------------------------------------------------

    string ch = "9"; //  Inside Double quote , a string is written
    // But sting ends up taking much more space , so for a single character , char is preffered
    cout << ch;

    // ----------------------------------------------------------------

    // Everything takes up a certain space in your computer,
    // but you can't use long long for storing 10. It will occupy a
    // lot of space as compared to the number stored.

    return 0;
}