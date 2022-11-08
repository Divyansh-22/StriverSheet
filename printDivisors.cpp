#include<iostream>
using namespace std;

void printDivisors(int n){
    cout<<"The divisors of "<<n<<"are ";
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0)
            cout<<i<<",";
    }
}

int main(){
    printDivisors(36);
}