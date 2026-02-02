// Program to print a solid rectangle pattern
// Input: n = 6
// Output:
// ******
// ******
// ******

using namespace std;
#include <iostream>
#include <conio.h>

int main(){
    int n=6;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}