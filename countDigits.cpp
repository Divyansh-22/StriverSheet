#include<iostream>
int evenlyDivides(int N){
        //code here
        int temp = N;
        int count = 0;
        while(temp > 9){
            int digit = temp % 10;
            if(digit != 0 && N % digit == 0)
                count += 1;
            temp /= 10;
        }
        if(temp != 0 && N % temp == 0 )
            count +=  1;
        return count;
    }
int main(){
    std::cout<<evenlyDivides(234);
}