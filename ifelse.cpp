#include<iostream>
using namespace std;
int main(){// simple programme to calculate budget and suggest weather to go to a trip or not using if else statement
    int budget;
    cout<<"enter savings";
    cin>> budget;
    if(budget<5000){
        cout<< "preffer staying home" ;
    }
    else(cout<< "enjoy the trip");
    return 0;
}