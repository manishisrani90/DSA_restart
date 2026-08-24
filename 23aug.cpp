class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            
            int needed = target - nums[i];

            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     unordered_map<int,int> mapp;
//     int index=0;
//     for(int i=0;i<5;i++){
//         mapp[i+3]=index;
//         index++;
//     }
//     for(int j=0;j<5;j++){
//         cout<<mapp[j]<<endl;
//     }
//     return 0;
// }