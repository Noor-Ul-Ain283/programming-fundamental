#include <iostream>
using namespace std;
int main() {
    int temp;
    cout << "Enter the temperature in °C: ";
    cin >> temp;
    if (temp >= 40) {
    cout << "It is extremely hot. Stay indoors!" << endl;
    }
    else if (temp >= 30 && temp <= 39) {
    cout << "Drink plenty of water to stay hydrated." << endl;
    }
    else if (temp >= 20 && temp <= 29) {
    cout << "The weather is pleasant. Suitable for outdoor activities." << endl;
    }
    else {
    cout << "Weather is cold. Wear warm clothes." << endl;
    }
    return 0;
}

