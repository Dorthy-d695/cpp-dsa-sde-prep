// Program - CountDigits.java
// Output:
// Enter the number: 
// 123
// Count: 3

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int t=n;
    int digits=0,count=0;
    while(t>0){
        digits=t%10;
        count++;
        t=t/10;
    }
    cout<<"Count: "<<count;
    getch();
    return 0;
}