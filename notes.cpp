#include<iostream>
using namespace std;

int main() {
    int amount ; 
    cout<< " enter number";
    cin>> amount;
    int result = 0;

    switch (1) {
        case 1:
             
            result = amount / 2000;
            
            cout<< "2000 rupee notes are:"<<amount/2000<<endl;
    }

    switch (2) {
        case 2:
           
            result = amount / 500;
        
             cout<< "500 rupee notes are:"<<amount/500<<endl;
    }

    switch (amount / 100) {
        case 3:
         
            result = amount / 100;
         
            cout<< "100 rupee notes are:"<<amount/100<<endl;
    }

    switch (amount / 50) {
        case 0:
            break;
        default:
            result = amount / 50;
             
            cout<< "50 rupee notes are:"<<amount/50<<endl;
    }

    cout << "Result: " << result << " notes" << endl;

    return 0;
}