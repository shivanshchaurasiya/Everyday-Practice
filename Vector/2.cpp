#include<iostream>
using namespace std;


int main() {
     enum Meal {breakfast,lunch,dinner};
     
     cout <<breakfast <<endl;
     cout <<lunch <<endl;
     cout <<dinner <<endl;


    //  Meal m1 = breakfast;
    //  cout <<m1 <<endl;

     Meal m1 = lunch;
     cout <<(m1==2);
    return 0;
}