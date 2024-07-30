/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {


        int n = cost.size();
        vector<int> minCost(n + 1, -1);

        return min(memoized(n - 1, minCost, cost), memoized(n - 2, minCost, cost));
        
    }

    static int memoized(int n, vector<int>& minCost, vector<int>& cost){

        if(n == 0 || n == 1){
            minCost[n] = cost[n];
            return cost[n];
        }

        if(minCost[n]  != -1) return minCost[n];

        minCost[n] = cost[n] + min(memoized(n - 1, minCost, cost), memoized(n - 2, minCost, cost));

        return minCost[n];
    }


};
// @lc code=end

