// Vidhatha Tallapally
// E18CSE208
// EB 04
 

#include <bits/stdc++.h>
using namespace std;
 
int isPrime(int num){
    if(num <=1)
        return 0;
    for(int i=2; i<=num/2;i++){
        if(num % i ==0)
            return 0;
    }
    return 1;
}

int  countPrimes(int strt, int end){
    int count =0;
    for(int i= strt; i<=end;i++){
        if(isPrime(i)==1)
        count++;
    }
    return count;
}

int main()
{ 
    int end_range;
    int start_range=1;
    cout<<"Enter Number upto which prime numbers are to be calculated"<<endl;
    cin>>end_range;
    cout <<endl<<"Primes in Ranges : "<<countPrimes(start_range,end_range)<<endl;
    return 0;
}