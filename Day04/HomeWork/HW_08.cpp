//Floyd's Triangle

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


#include<iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	for(int row = 0, num = 1; row < n; row++) {
		for(int col = 0; col < row + 1; col++, num++) {
			cout << num << " ";
		}
		cout <<endl;
	}
}
