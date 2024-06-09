//pair
void explainPair(){

pair<int, int> p = {1, 3};

cout<<p.first<<" "<<p.second;//prints 1 3 


pair<int, pair<int, int>> p = {1, {2, 3}};

cout <<p.first<<" "<<p.second.second<<" "<<p.second.first; //prints 1 3 2

pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

cout<<arr[1].second; //prints 5

cout<<
}