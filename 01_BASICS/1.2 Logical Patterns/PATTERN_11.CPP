#include<bits/stdc++.h>
using namespace std;
void Pattern8(int n){
for(int i=0;i<n;i++){
    //for space
    for(int j=0;j<i;j++){
        cout<<" ";
    }
        //for star
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }
        //for space
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
}
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
Pattern8(n);
}
    return 0;
}