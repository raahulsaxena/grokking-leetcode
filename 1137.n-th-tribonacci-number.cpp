/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {

        if(n == 0 || n == 1) return n;
        if(n == 2) return 1;

        vector<int> memo(n + 1, -1);

        memo[0] = 0;
        memo[1] = 1;
        memo[2] = 1;

        return memoizedTri(n, memo);
        
    }

    static int memoizedTri(int n, vector<int>& memo){

        if(memo[n] != -1) return memo[n];

        memo[n] = memoizedTri(n - 1, memo) +  memoizedTri(n - 2, memo) +  memoizedTri(n - 3, memo);

        return memo[n];

    }
};
// @lc code=end

