// Program to print a Hollow Rectangle pattern
// Input: n = 12
// Output:
// ************
// *          *
// *          *
// *          *
// *          *
// ************

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=12;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n/2 || j==n){
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