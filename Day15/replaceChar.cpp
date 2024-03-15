#include <iostream>
#include <string.h>
using namespace std;

void replaceChar(char *ch, int size)
{
    for (int i = 0; i < strlen(ch) - 1; i++) {
        if(ch[i] == '@') {
            ch[i] = ' ';
        }
    }
}

int main()
{
    char ch[100];
    cout << "Enter string: " << endl;
    cin >> ch;
    cout << "String before replacement of @: \n"
         << ch << endl;
    replaceChar(ch, 100);
    cout << "String after replacement of @: \n"
         << ch << endl;
    return 0;
}