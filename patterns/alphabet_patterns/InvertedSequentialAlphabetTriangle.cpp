// Program to print a Inverted Repeated Alphabet Triangle pattern
// Input: n = 5
// Output:
//A A A A A 
//B B B B 
//C C C 
//D D 
//E 

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        char ch=('A'+i);
        for(int j=i;j<n;j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}