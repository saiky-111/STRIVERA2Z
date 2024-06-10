#include <bits/stdc++.h>
using namespace std;


//Brute
//below code's time complexity is O(min(n1,n2))
// gcd=1;
// for(int i=1;i<=min(n1,n2);i++){
//     if(n1%i==0 && n2%i==0){
//         gcd=i;
//     }
// }


//Better
//below code's worst case time complexity is still O(min(n1,n2))
// for(int i=min(n1,n2); i>=1;i--){
//     if(n1%i==0 && n2%i==0){
//        cout<<"Gcd is"<<i;
//        break;
//     }
// }

int main(){

    return 0;
}