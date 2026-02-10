//Armstrong Number:
//A number is an Armstrong number if the sum of its digits each raised to the power of the number of digits equals the number itself.
//
//Example:
//
//153 → 1³ + 5³ + 3³ = 153

//Sum of each digit^number of digits = Original number

// Output 
// Enter the number:
//153
//153 is a Armstrong Number
//
//Enter the number:
//157
//157 is not a Armstrong Number

using namespace std;
#include<iostream>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int t=n;
    int digits=0,sum=0,count=0;
    while(t>0){
        digits=t%10;
        count++;
        t=t/10;
    }
    t=n;
    while(t>0){
        digits=t%10;
        sum=sum+pow(digits,count);
        t=t/10;
    }
    if(sum == n){
        cout<<n<<" is a Armstrong Number";
    }
    else{
        cout<<n<<" is not a Armstrong Number";
    }
    getch();
    return 0;
}