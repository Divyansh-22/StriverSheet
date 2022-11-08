#include<iostream>
using namespace std;

int reverseNum(int n){
    string temp;
    while(n > 9){
        temp += to_string(n % 10);
        n /= 10;
    }
    temp += to_string(n);
    return stoi(temp);
}
int main(){
    cout<<reverseNum(234456);
}