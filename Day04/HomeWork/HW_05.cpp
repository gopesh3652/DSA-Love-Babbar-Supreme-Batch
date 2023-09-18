//     1
//    121
//   12321
//  1234321
// 123454321


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int row = 0; row < n; row++)
	{
		// space
		for (int col = 0; col < n - row - 1; col++)
		{
			cout << " ";
		}
		// Number
		for (int col = 0, num = 1; col < row + 1; col++, num++)
		{
			cout << num;
		}
		for (int col = 0, num = row; col < row; col++,num--)
		{
			cout << num;
		}
		
		cout << endl;
	}
}
