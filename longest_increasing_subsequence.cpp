#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int vec_size = nums.size();
        vector<int> dp(vec_size);
        int max_val = 1;
        dp[vec_size-1] = 1;
        for (int i = vec_size-2; i >= 0; --i) {
            dp[i] = 1;
            for (int j = i+1; j <= vec_size-1; ++j) {
                if(nums[i] < nums[j] && dp[i] < dp[j] +1 ){
                    dp[i] = dp[j] +1;
                }
            }
            if(dp[i] > max_val) max_val = dp[i];
        }

        return max_val;
    }
};