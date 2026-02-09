// Program to print a Hollow Square pattern
// Input: n = 6
// Output:
// ******
// *    *
// *    *
// *    *
// *    *
// ******

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    getch();
    return 0;
}