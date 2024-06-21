#include<bits/stdc++.h>
using namespace std;
int main(){

// Write a program that takes an input of age
// and prints if you are adult or not
// >=18. yes
// < 18, no
int age;
cin >> age;
if( age >= 18) {
    cout<< "You are an adult!";
}
else{
    cout<<"You are not an adult!";// if we use only 'else', it means
    //if the 'if-condition' doesn't execute , then definately execute 
    //the else statement.
}
// -------------------------------------------------------

int age;
cin >> age;
if( age >= 18) {
    cout<< "You are an adult!";
}
else if(age<18){
    cout<<"You are not an adult!";// it will only get into this 
  //  else-if loop, only if this condition satisfies.i.e age <18
}
// -------------------------------------------------------------

// It is not mandatory to write the else statement always

int age;
cin >> age;
if( age >= 18) {
    cout<< "You are an adult!";
}
// if input is 16, the if-condition will not be executed, 
// and since there is no else statement, no output is shown.


// -------------------------------------------------------------


/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

int marks;
cin>>marks;
if(marks<25){
    cout<< "F";
}
    return 0;
}