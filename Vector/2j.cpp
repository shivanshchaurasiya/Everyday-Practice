#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }

    return fib(n-2)+fib(n-1);
}

int main(){
    int num;

    cout <<"Enter a number : ";
    cin >>num;

    cout <<"The term in fibonacci sequence at position "<<num<<" is " <<fib(num)<<endl;

    return 0;
}