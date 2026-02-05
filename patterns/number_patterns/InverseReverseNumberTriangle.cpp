// Program to print a Inverted Reverse Number Triangle pattern
// Input: n = 5
// Output:
// 5 4 3 2 1 
// 4 3 2 1
// 3 2 1
// 2 1
// 1

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}