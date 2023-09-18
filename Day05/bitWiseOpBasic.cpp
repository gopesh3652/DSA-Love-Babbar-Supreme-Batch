// Basic of bitwise operator

#include <iostream>
using namespace std;

int main()
{
	int a = 2, b = 3;
	cout << (a & b) << endl;

	int c = 5, d = 10;
	cout << (c | d) << endl;

	int num = 1;
	cout << ~(num) << endl;
	cout << ~num << endl;
	cout << (~num) << endl;

	int a1 = 5, b1 = 10;
	cout << (a1 ^ b1) << endl;

	int a2 = 5, b2 = 5;
	cout << (a2 ^ b2) << endl;

	int a3 = 3, b3 = -3;
	cout << (a3 ^ b3) << endl;

	int num1 = 7;
	cout << (num1 << 2) << endl;

	int num2 = -10;
	cout << (num2 << 1) << endl;

	int num3 = 5;
	cout << (num3 >> 1) << endl;

	int num4 = -6;
	cout << (num4 >> 1) << endl;

	// int cd = 10;
	// cout << (cd << -1) <<endl;

	// pre-post  inc/dec

	int bc = 10;
	cout << ((++bc)*(bc++)) <<endl;

	int ab = 10;
	cout << ((ab++)*(++ab)) <<endl;

	return 0;
}
