#include<iostream>
using namespace std;

void swap_pointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int x =4;
    int y =5;

    swap_pointer(&x,&y);
    cout <<x <<endl;
    cout <<y <<endl;

    return 0;
}