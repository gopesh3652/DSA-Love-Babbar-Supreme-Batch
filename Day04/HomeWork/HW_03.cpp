// 1
// 1 2
// 1  3
// 1   4
// 12345

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < row + 1; col++) {
			if(row == 0 || row == n - 1) {
				cout << col + 1;
			}
			else {
				if(col == 0) {
					cout << col + 1;
				}
				else if (col == row + 1 - 1) {
					cout << " " << col + 1;
				}
				else {
					cout << " ";
				}
			}
		}
		cout <<endl;
	}
}
