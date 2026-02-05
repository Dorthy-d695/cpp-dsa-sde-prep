// Program to print a Sequential Number Triangle pattern
// Input: n = 5
// Output:
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}