#include <iostream>
#include <cstring>
using namespace std;

// int findLength(char *ch, int size)
// {
//     int length = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (ch[i] == '\0')
//             break;
//         length++;
//     }

//     return length;
// }

int main()
{
    char ch[100];
    cout << "Enter string: \n";
    cin >> ch;

    // int len = findLength(ch, 100);
    // cout << "Length of " << ch << " is: " << len << endl;

// another method is to use inbuilt function

    cout << "Length of " << ch << " is: " << strlen(ch) << endl;
    return 0;
}