#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// void print(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << "\t";
//     }
//     cout << endl;
// }

// bool myComp(int &a, int &b)
// {
//     // return a < b; //increasing
//     return a > b; // decreasing
// }

// int main()
// {
//     vector<int> v = {44, 55, 66, 11, 22, 33};
//     sort(v.begin(), v.end(), myComp);
//     print(v);
//     return 0;
// }

// vector of vector of int
void print(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> &temp = v[i];
        cout << temp[0] << " " << temp[1] << endl;
    }
    cout << endl;
}

bool myCompfor1stIndexSort(vector<int> &a, vector<int> &b)
{
    return a[1] > b[1];
}

int main()
{
    vector<vector<int>> v = {{1, 44}, {0, 55}, {0, 11}, {0, 22}, {2, 33}};
    // int n;
    // cout << "Enter size: ";
    // cin >> n;
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int a, b;
    //     vector<int> temp;
    //     cout << "Enter a, b :";
    //     cin >> a >> b;
    //     cout << endl;
    //     temp.push_back(a);
    //     temp.push_back(b);
    //     v.push_back(temp);
    // }
    cout << "Inserted elements: " << endl;
    print(v);
    sort(v.begin(), v.end(), myCompfor1stIndexSort);
    cout << "Sorted by 1st index: " << endl;
    print(v);
    return 0;
}