#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a *b;
}

int main(){
    int x = 2;
    int y = 3;

    cout<<"The product of x & y is "<<product(x,y) <<endl;

    return 0;
}

