#include <iostream>
using namespace std;

void toUpperCase(char *ch)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currChar = ch[index];
        if (currChar >= 'a' && currChar <= 'z')
        {
            ch[index] = currChar - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cout << "Enter string: " << endl;
    cin >> ch;
    toUpperCase(ch);
    cout << "Upper Case: " << ch << endl;
    return 0;
}