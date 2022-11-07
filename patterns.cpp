#include<iostream>

using namespace std;

// ****
// ****
// ****
// ****
void squarePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// *
// **
// ***
// ***
void trianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4

void numTrianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 1; j <=i+1; j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4

void sameNumTrianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 1; j <=i+1; j++){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}

// ****
// ***
// **
// *
void UpsideDownStarTrianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = length; j > i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

// 1 2 3 4 
// 1 2 3
// 1 2
// 1
void UpsideDownTrianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = length; j > i; j--){
            cout<<length-j+1<<" ";
        }
        cout<<endl;
    }
}


//         *
//     *   *   *
// *   *   *   *   *
void pyramidPattern(int length){
    string spaces = "" ;
    for(int i = 0; i < 2*length-1; i++){
        spaces += " ";
    }
    for(int i = 0; i < length; i++){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        spaces.pop_back();
        spaces.pop_back();
        cout<<endl;
    }
}

// * * * * *
//   * * *
//     * 
void upsideDownPyramidPattern(int length){
    string spaces = "" ;
    for(int i = length-1; i >= 0; i--){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        spaces += "  ";
        cout<<endl;
    }
}

//         *
//     *   *   *
// *   *   *   *   *
// *   *   *   *   *
//     *   *   *
//         * 
void diamond(int length){
    string spaces = "" ;
    for(int i = 0; i < 2*length-1; i++){
        spaces += " ";
    }
    for(int i = 0; i < length; i++){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        spaces.pop_back();
        spaces.pop_back();
        cout<<endl;
    }
    spaces=" ";
    for(int i = length-1; i >= 0; i--){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        spaces += "  ";
        cout<<endl;
    }
}

//      *
//      *   *
//      *   *   *
//      *   *   *
//      *   *
//      * 

void halfDiamond(int length){
    string spaces = "   " ;

    for(int i = 0; i < length; i++){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i = length-2; i >= 0; i--){
        cout<<spaces;
        
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
void triangle01Pattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 1; j <=i+1; j++){
            if(i % 2)
                cout<<(j+1) % 2<<"  ";
            else
                 cout<<j % 2<<"  ";
        }
        cout<<endl;
    }
}

// 1           1
// 1 2       2 1
// 1 2 3   3 2 1
// 1 2 3 4 3 2 1

void pattern12(int length){
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= 2*length-1; j++){
            if(j <= i)
                cout<<j<<" ";
            else
                if(j > length && length - (j % length) <= i)
                    cout<<length - (j % length)<<" ";
                else
                    cout<<"  ";
        }
        cout<<endl;
    }
}  

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14

void numTriangle(int length){
    int num = 1;
    for(int i = 0; i < length; i++){
        for(int j = 1; j <=i+1; j++){
            cout<<num<<"  ";
            num+=1;
        }
        cout<<endl;
    }
}

// A
// AB
// ABC
// ABCD
void alphaTriangle(int length){
    
    for(int i = 0; i < length; i++){
        int num = 65;
        for(int j = 1; j <=i+1; j++){
            cout<<char(num)<<"  ";
            num+=1;
        }
        cout<<endl;
    }
}

// ABCD
// ABC
// AB
// A
void UpsideDownAlphaTrianglePattern(int length){
    for(int i = length-1; i >= 0; i--){
        int num = 65;
        for(int j = 1; j <=i+1; j++){
            cout<<char(num)<<"  ";
            num+=1;
        }
        cout<<endl;
    }
}

// A
// B B
// C C C
// D D D D
void sameAlphaTrianglePattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 1; j <=i+1; j++){
            cout<<char(i+65)<<"  ";
        }
        cout<<endl;
    }
}

//        A 
//      A B A 
//    A B C B A 
//  A B C D B C A 
void alphaPyramid(int length){
    string spaces = "" ;
    for(int i = 0; i < 2*length-1; i++){
        spaces += " ";
    }
    for(int i = 0; i < length; i++){
        cout<<spaces;
        for(int j = 0; j < 2*i+1; j++){
            if(j <= i)
                cout<<char(j+65)<<" ";
            else
                cout<<char(j%i + 65)<<" ";
        }
        spaces.pop_back();
        spaces.pop_back();
        cout<<endl;
    }
}

// E
// D E
// C D E
// B C D E
// A B C D E

void pattern17(int length){
    for(int i = length; i > 0; i--){
        for(int j = i; j <= length; j++){
            cout<<char(j + 64)<<"  ";
        }
        cout<<endl;
    }
}

//pattern21
// *****
// *   *
// *   *
// *   *
// *****
void zeroPattern(int length){
    for(int i = 0; i < length; i++){
        for(int j = 0;j < length; j++){
            if(i == 0 || i == length - 1)
                cout<<"*";
            else
            {
                if(j == 0 || j == length-1)
                cout<<"*";
            else
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void numPattern(int length){
    for(int i = 0; i < 2*length-1; i++){
        for(int j = 0;j < 2*length-1; j++){
            if(i == 0 || i == 2*length - 1)
                cout<<length;
            else
            {
                if(j == 0 || j == 2*length-1)
                cout<<length;
            else
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    cout<<" Enter the length  ";
    int n;
    cin>>n;
    
    pattern12(n);
}