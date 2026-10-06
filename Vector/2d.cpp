#include<iostream>
using namespace std;

void swap_Ref_Var(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main (){
    int x, y;

    x = 4;
    y = 5;

    swap_Ref_Var(x,y);
    cout <<x <<endl;
    cout <<y <<endl;

    return 0;

}