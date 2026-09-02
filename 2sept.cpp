// kadane algo implementation after 6th try by self

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        
            current_sum += nums[i];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }

            
        
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << max_sum;

    return 0;
}