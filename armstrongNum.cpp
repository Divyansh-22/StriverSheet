#include<iostream>
using namespace std;
string armstrongNumber(int n){
        // code here
        int last = n % 10;
        int second = (n/10) - ((n/100)*10);
        int first = (n - (second*10+last))/100;
        if(first*first*first + second*second*second + last*last*last == n)
            return "Yes";
        return "No";
    }

int main(){
    cout<<armstrongNumber(371);
}