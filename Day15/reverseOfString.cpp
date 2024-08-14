#include <iostream>
#include <string.h>
// #include<bits/stdc++.h>
using namespace std;

void reverseString(char *ch, int size)
{
    int strSize = strlen(ch);
    int start = 0, end = strSize - 1;
    for (int i = 0; i < strSize / 2; i++)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

int main()
{
    char ch[100];
    cout << "Enter string: " << endl;
    cin >> ch;
    reverseString(ch, 100);
    cout << "Reversed string: " << ch << endl;
    return 0;
}