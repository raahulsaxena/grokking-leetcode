/*
 * @lc app=leetcode id=70 lang=java
 *
 * [70] Climbing Stairs
 */

// @lc code=start

/*

    If it takes 1 step to reach the top, 
    then there is only 1 way to reach the top.

*/
class Solution {
    public int climbStairs(int n) {

        if( n == 1) return 1;

        // For n = 3 onwards, the number of ways to reach nth step
        // is the sum of the number of ways to reach (n - 1)th step 
        // and (n - 2)th step.

        int[] dp = new int[n + 1];

        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];

    }
}
// @lc code=end

