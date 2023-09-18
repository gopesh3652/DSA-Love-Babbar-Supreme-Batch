#include<iostream>
#include "2.h"

using namespace std;

void fun() {
    cout << "fun from 1.cpp" <<endl;
}

int main() {

    fun();
    funFrom2();
    return 0;

}