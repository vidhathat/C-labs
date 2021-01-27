// Vidhatha Tallapally
// E18CSE208
// EB 04
 

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1 ;
    return n* factorial(n-1);
    
}

int main(){
    int x;
    cout<<" enter any positive number" << endl;
    cin>> x;
    int res =factorial(x);
    cout << res <<endl;

}