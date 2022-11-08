#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n/2; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n = 97;
    if(isPrime(n))
        cout<<n<<" is prime";
    else
        cout<<n<<" is not prime";
}