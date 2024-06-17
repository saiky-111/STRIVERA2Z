#include <bits/stdc++.h>
using namespace std;
void explainVector() {
    // Declaration of a vector of integers
    vector<int> v; 

    // Adding elements to the vector
    v.push_back(1);        // Adds 1 to the end of the vector
    v.emplace_back(2);     // Similar to push_back, but slightly more efficient

    // Declaration of a vector of pairs
    vector<pair<int, int>> vec;

vec.push_back({1, 2}); // notice the curly braces , in order to insert a pair.
v.emplace_back(1, 2); // emplace back automatically assumes it to be a pair and 
//takes it as an input and inserts it into the vector that we defined.

vector<int> v1(5,100); // it's a container of size 5 , with 5 instances of 100

vector<int> v2(5);// it's a container of size 5 , with 5 instances of 0 or any garbage value is declared, it depends on the compiler.

vector<int> v3(5,20); // Initializing a vector with 5 elements, all set to 20.

vector<int> v4(v3); // v2 is a copy of v1.

//Ways to access the elements in a vector.

cout<< v[0] <<" " << v.at(0); // ways of accessing the elements in a vector.

  // Using an iterator to access elements
vector<int>::iterator it = v.begin(); // another way of accessing the elements in the vector.
// v.begin() directly points to the memory
//But *(v.begin()) gives us the element.
// Dereferencing the iterator to get the element


it++;
cout<< *(it) << " "; // now printing the elemnts (accessing the elements)
// Moving to the next element and accessing it

it = it + 2;
cout<< *(it) << " ";// Moving 2 positions ahead and accessing the element

//iterators other than v.begin() are: v.end(), v.rend(), v.rbegin()

vector<int>::iterator it= v.end(); // if we use v.end() , the iterator 
//will not point to the last element of the array, instead it will 
//point to the next of the last element.
//End points to a memory location that is right after the last element.

vector<int>::iterator it= v.rend();// used rarely.//reverse end
// rend points to the before of the first element.

vector<int>::iterator it= v.rbegin();//used rarely. //reverse begin
// rbegin will be pointing to the last element ,
//and if we do it++ to this, it will come towards the first element.



cout<< v.back() << " ";// it points to the last element.
//i.e the element which is at the back.
// Accessing the last element using back()


// to print the entire vector using an iterator
for (vector<int>::iterator it = v.begin(); it!= v.end(); it++ ){
    cout<< *(it) << " ";
}
   cout << endl;

//slight shortcut to print the entire vector
// auto automatically assigns it to a vector iterator.
for (auto it = v.begin(); it!= v.end(); it++ ){
    cout<< *(it) << " ";
}
   cout << endl;

//another way is: For each loop
// auto means, please iterate on the data type.
for(auto it : v){
    cout<< it <<" ";
}
   cout << endl;



//Deletion in a vector.

// {10, 20, 12, 23}  ----> after erasing -> {10, 12, 23}
v.erase(v.begin()+1); //one way to erase //. it is used to erase a single element.


v.erase(v.begin() +2 , v.begin() +4 );// to erase more than one element.
// we will say give me the starting address.
//and give me the end address, after the element.

// {10, 20, 12, 23, 35}  ----> and we want to delete 20, 12
//v.begin()+4 is because we want the end address, after the element.
//----> after erasing -> {10, 23, 35}   // i.e  [start, end)


//Insert Function
// for inserting single element.
vector<int>v (2, 100); // creates 2 instances of 100 in the conatiner.
//{100, 100}

v.insert(v.begin(), 300); // we say insert 300 right at the start
//{300, 100, 100}

//for inserting multiple element.
v.insert(v.begin() + 1 , 2, 10); // if we want to insert two 10s.
// we'll say the { position, no of elements that you wanna insert, the no that you wanna insert }
// {300, 10, 10, 100, 100}


vector<int> copy(2, 50); // {50, 50} // copy is the name of the vector

v.insert(v.begin(), copy.begin(), copy.end());// { the address you wanna enter the vector, insert the entire vector from begin to end.}
//{50, 50, 300, 10, 10, 100, 100}
// Inserts the elements of 'copy' at the beginning

//{10,20}
cout<<v.size(); //2  // Prints the size of the vector


//{10,20}
v.pop_back(); //{10}  // Removes the last element  // Removing the last element from the vector

//v1 => {10,20}
//v2 => {30,40}
v1.swap(v2); // v1 => {30,40} , v2 => {10,20} //swaps the vectors  // Swapping the contents of two vectors

v.clear(); // erases the entire vector  // Clearing all elements from the vector

cout<< v.empty();//tells if the vector is empty or not
// Checking if the vector is empty // Prints 1 if the vector is empty, 0 otherwise
}


}
int main() {

    explainVector();
    return 0;
}
