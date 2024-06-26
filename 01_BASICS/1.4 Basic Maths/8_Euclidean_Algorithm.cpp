//Gcd(a,b) == Gcd((a - b), b)   where a>b
//or

//Gcd(a,b) == Gcd((a % b), b)    where a>b
// here --> (greater % smaller) --> if one of them becomes zero(0) --> it is GCD.




code:


int gcd(int a, int b){

while(a > 0 && b > 0){
    if(a > b) a = a % b;
    else b = b % a;
}
if(a==0) return b;
return a;

}



//Time Complexity is O(log fi (min(a,b)))