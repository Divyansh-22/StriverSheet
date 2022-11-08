#include<iostream>
#include<vector>
using namespace std;
string is_palindrome(int x)
		{
		    // Code here.
		    if (x < 0)
                return "No";
            vector<int> palin;
            while( x > 9) {
                palin.push_back(x%10);
                x /= 10;
            }
            palin.push_back(x);
            for(int i = 0; i < (palin.size())/2; i++){
                if (palin[i] != palin[palin.size() - i -1])
                    return "No";
            }
            return "Yes";
		}

int main(){
    int x = 2345432;
    cout<<is_palindrome(x);
}