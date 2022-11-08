#include<iostream>
#include<vector>
using namespace std;
vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> lg(2);
        long long a = A;
        long long b = B;
        long long r;
        if(A > B){
            int r = a % b;
            a = b;
            b = r;
            while(b != 0){
                r = a % b;
                a = b;
                b = r;
            }
            lg[1] = a; //gcd of AB
        }else{
            int r = b % a;
            b = a;
            a = r;
            while(a != 0){
                r = b % a;
                b = a;
                a = r;
            }
            lg[1] = b; //GCD of AB
        }
        lg[0] = (A*B)/lg[1];// lcm of two numbers ; lcm * gcd = AB

        return lg;
    }