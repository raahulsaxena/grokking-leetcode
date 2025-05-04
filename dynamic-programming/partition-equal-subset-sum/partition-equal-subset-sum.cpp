#include<stdio.h>
#include<vector>

using namespace std;

class Solution {

    public:
        bool canPartition(vector<int>& nums) {
    
            int total_sum = 0;
    
            for(int i : nums) total_sum += i;
    
            if(total_sum % 2 != 0) return false;
    
            int target_sum = total_sum / 2;
    
            vector<vector<int>> dp(nums.size(), vector<int>(target_sum + 1, -1));
    
            return recur(nums, 0, target_sum, dp);
    
            
        }
    
        static bool recur(vector<int> &nums, int idx, int target, vector<vector<int>> &dp){
    
            
    
            if(idx >= nums.size() || target < 0) return false;
    
            if(target == 0) {
                return true;
            }
    
            if(dp[idx][target] != -1) return dp[idx][target];
    
            bool a1 = recur(nums, idx + 1, target, dp);
    
            bool a2 = recur(nums, idx + 1, target - nums[idx], dp);
    
            dp[idx][target] = a1 || a2;
    
            return dp[idx][target];
    
        }
    };