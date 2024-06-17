#include <bits/stdc++.h>
using namespace std;
void explainVector() {
vector<int> v;//declaration of the vector

v.push_back(1);
v.emplace_back(2); //similar to push back, faster than push back

vector<pair<int, int>>vec;

vec.push_back({1, 2}); // notice the curly braces , in order to insert a pair.
v.emplace_back(1, 2); // emplace back automatically assumes it to be a pair and 
//takes it as an input and inserts it into the vector that we defined.

vector<int> v(5,100); // it's a container of size 5 , with 5 instances of 100

vector<int> v(5);// it's a container of size 5 , with 5 instances of 0 or garbage value

vector<int> v1(5,20);

vector<int> v2(v1);


vector<int>::iterator it = v.begin();

it++;
cout<< *(it) << " ";


it = it + 2;
cout<< *(it) << " ";


vector<int>::iterator it= v.end();

vector<int>::iterator it= v.rend();

vector<int>::iterator it= v.rbegin();




cout<< v[0] <<" " << v.at(0);

cout<< v.back() << " ";




for (vector<int>::iterator it = v.begin(); it!= v.end(); it++ ){
    cout<< *(it) << " ";
}

for (auto it = v.begin(); it!= v.end(); it++ ){
    cout<< *(it) << " ";
}

}
int main() {

    explainVector();
    return 0;
}
