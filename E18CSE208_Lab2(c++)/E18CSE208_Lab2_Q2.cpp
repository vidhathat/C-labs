// Vidhatha Tallapally
// E18CSE208
// EB 04
 

#include <iostream>

using namespace std;

int main(){

    int basic, da , hra;
    cout<< "Enter the basic amount"<< endl;
    cin >> basic;
    cout << "enter the DA percentage "<<endl;
    cin >> da;
    cout<< "enter the hra percentage" << endl;
    cin >> hra;
    int result = (basic +((da*basic)/100) + ((hra*basic)/100));
    cout << "the gross salary is :"<< result <<endl;
}