// Program - Factorial.java
// Output:
// Enter the number: 
// 5
// Factorial of 5 is 120

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    getch();
    return 0;
}