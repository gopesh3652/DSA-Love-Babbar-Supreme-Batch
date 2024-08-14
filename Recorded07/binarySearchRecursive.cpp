#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int key, int s, int n)
{
    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (key == v[m])
            return m;
        else if (v[m] < key)
        {
            binarySearch(v, key, m + 1, e);
        }
        else
        {
            binarySearch(v, key, s, m - 1);
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {2, 5, 7, 8, 10, 12, 14, 56, 78, 90, 678, 890};
    int key = 6;
    int n = v.size();
    int s = 0;
    int ans = binarySearch(v, key, s, n);
    if (ans == -1)
    {
        cout << "Not found" << endl;
        return 0;
    }
    cout << "Position of: " << key << " is: " << ans << endl;
    return 0;
}