// Program to print a Full Pyramid pattern
// Input: n = 5
// Output:
//     *
//    ***
//   *****
//  *******
// *********

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}