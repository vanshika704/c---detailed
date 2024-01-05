#include<iostream>
using namespace std;

int main() {
    int amount ; 
    cout<< " enter number";
    cin>> amount;
    int result = 0;

    switch (amount / 2000) {
        case 0:
             break;
        default:
            result += amount / 2000;
            amount %= 2000;
    }

    switch (amount / 500) {
        case 0:
            break;
        default:
            result += amount / 500;
            amount %= 500;
    }

    switch (amount / 100) {
        case 0:
          break;
        default:
            result += amount / 100;
            amount %= 100;
    }

    switch (amount / 50) {
        case 0:
            break;
        default:
            result += amount / 50;
            amount %= 50;
    }

    cout << "Result: " << result << " notes" << endl;

    return 0;
}