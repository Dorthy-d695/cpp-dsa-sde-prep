//Perfect Number:
//A number is a Perfect Number if the sum of its proper divisors (excluding itself) equals the number.
//
//Example:
//
//6 → 1 + 2 + 3 = 6 ✅
//
//Sum of divisors (except the number itself) = Original number

// Program - PerfectNumber
// Output:
//Enter the number: 
//6
//6 is a Perfect Number
//
//Enter the number: 
//7
//7 is not a Perfect Number

using namespace std;
#include<iostream>
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(n == sum){
        cout<<n<<" is a Perfect Number";
    }
    else{
        cout<<n<<" is not a Perfect Number";
    }
    cin.get();
    return 0;
}