/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> maxRobbed(n  + 1, -1);

        return maxAmountRobbed(n - 1, nums, maxRobbed);
        
    }

    static int maxAmountRobbed(int n, vector<int>& nums, vector<int>& maxRobbed){

        if(n == 0){
            maxRobbed[n] = nums[0];
            return nums[0];

        }

        if(n == 1){
            maxRobbed[n] = max(nums[0], nums[1]);
            return maxRobbed[n];
        }

        if(maxRobbed[n] != -1) return maxRobbed[n];

        maxRobbed[n] = max(nums[n] + maxAmountRobbed(n - 2, nums, maxRobbed), maxAmountRobbed(n - 1, nums, maxRobbed));

        return maxRobbed[n];

    }
};
// @lc code=end

