#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char *ch)
{
    int i = 0, j = strlen(ch) - 1;
    while(i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cout << "Enter string: " << endl;
    cin >> ch;
    bool flag = checkPalindrome(ch);
    if (flag)
    {
        cout << ch << " is Palindrome" << endl;
        return 0;
    }
    cout << ch << " is not Palindrome" << endl;
    return 0;
}