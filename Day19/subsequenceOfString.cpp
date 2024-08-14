#include <iostream>
// #include<cstring>
using namespace std;

void subsequenceOfString(string str, string output, int index)
{
    if (index >= str.length())
    {
        // ans is in output string
        cout << output << endl;
        return;
    }
    char ch = str[index];

    // exclude
    subsequenceOfString(str, output, index + 1);

    // include
    output.push_back(ch);
    subsequenceOfString(str, output, index + 1);
}

int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    subsequenceOfString(str, output, index);
    return 0;
}
