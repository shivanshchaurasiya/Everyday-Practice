#include<iostream>
using namespace std;


float moneyReceived(int currentMoney,float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    int money;
    cout <<"Enter the amount of money: ";
    cin >>money;

    cout <<"If you have INR "<<money<<" in your bank account, you will receive INR "<<moneyReceived(money)<<" after one year"<<endl;

    cout<<"For Vip : If you have INR "<<money <<" in your Bank Account, you will receive "<<moneyReceived(money,1.1)<<" INR after one year" <<endl;

    return 0;

}