#include<iostream>
using namespace std;

int main() {
    int budget;
    string result;

    cout << "Enter budget: ";
    cin >> budget;

    if (budget < 1000) {
        result = "Prefer saving some money";
    } else if (budget >= 1000 && budget < 2000) {
        result = "Avoid spending too much money";
    } else if (budget >= 2000 && budget < 3000) {
        result = "Can go for a picnic";
    } else if (budget >= 3000 && budget < 4000) {
        result = "Mjje kro bht paise h";
    } else if (budget >= 4000 && budget < 5000) {
        result = "Paisa hi paisa";
    } else {
        result = "aish kro paise khtm nahi hore abhi!";
    }

    cout << result << endl;
    return 0;
}
