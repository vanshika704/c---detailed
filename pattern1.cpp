#include<iostream>
using namespace std;

int i, j, row, col;

int main() {
    cout << "Enter number: ";
    cin >> row;
    col = row;

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cout << j << " ";
        }
        cout << endl;  
    }

    return 0;
}
