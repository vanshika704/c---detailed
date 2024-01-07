#include<iostream>
using namespace std;

int sum(int num[], int size) {
    int totalSum = 0; 
    for (int i = 0; i < size; i++) {
        totalSum = totalSum + num[i]; 
    }
    return totalSum;
}

int main() {
    int i, size;
    cout << "Enter the number of elements of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    int num[15]; 
    for (i = 0; i < size; i++) {
        cin >> num[i];
    }

    int result = sum(num, size);
    cout << "Sum of array elements: " << result << endl;

    return 0;
}
