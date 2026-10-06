#include<iostream>
using namespace std;

int Strlen(const char*p){
    int count = 0;
    while(*p){
        count++;
        p++;
    }
    return count;
}

int main(){
    cout<<Strlen("Shivansh");

    return 0;
}