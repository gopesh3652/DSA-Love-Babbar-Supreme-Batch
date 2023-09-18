// Km to miles conversion

#include<iostream>
using namespace std;

double KMtoMiles(double km) {
    double oneMile = 0.621371;
    return km*oneMile;
}

int main() {
    double kiloMeter;
    cout << "Enter distance in Kilometer :" <<endl;
    cin >> kiloMeter;
    double miles = KMtoMiles(kiloMeter);
    cout << kiloMeter << " KM in Miles is : " << miles <<endl;
    return 0; 
}