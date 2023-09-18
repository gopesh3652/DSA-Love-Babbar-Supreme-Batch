// Area of circle

#include<iostream>
#include "math.h"
#define PI 3.14
using namespace std;

float circle_area(float radius) {
    return PI*pow(radius, 2);
}

int main(void) {
    float radius;
    cout << "Enter radius of circle : ";
    cin >> radius;
    float ans = circle_area(radius);
    cout << "Area of circle is : " << ans <<endl;
}