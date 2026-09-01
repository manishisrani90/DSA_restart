// Product of array except self (using division in o(n) time ) LEETCODE-238

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int multiplier = 1;
    vector<int> arr = {9, 3, 7, 5, 2};
    for (int i = 0; i < arr.size(); i++)
    {
        multiplier = multiplier * arr[i];
    }
    int ans = 1;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] == 0)
        {
            ans = 0;
        }
        else
        {
            ans = multiplier / arr[j];
        }
        cout << ans << " ";
    }

    return 0;
}