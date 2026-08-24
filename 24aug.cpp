#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, int> mp;

    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;

        mp[num] = i;
    }
    for (auto x : mp)
    {
        cout << x.first << " → " << x.second << endl;
    }
    return 0;
}