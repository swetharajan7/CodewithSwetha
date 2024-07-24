#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void printDivisor(int n){
    vector<int>divisor;
    for (int i=1; i<= sqrt(n); i++){
       if(n%i==0){
        divisor.push_back(i);   

       if(i != n/i){
           divisor.push_back(n/i);
       }
       }
    }
    sort(divisor.begin(),divisor.end());
    for (int divisors:divisor){
        cout<<divisors<<endl;
    }
}
int main(){
    int n;
    cout<<"Please enter a positive integer greater than 2: ";
    cin>>n;
    if (n<=2){
    cout<<"1";
    return 1;
    }
    printDivisor(n);
    return 0;
}