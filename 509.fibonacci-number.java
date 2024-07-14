/*
 * @lc app=leetcode id=509 lang=java
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {

    /*
        Approach:  Memoization
        The below approach can be optimized further by using
        only 3 variables to store the last 3 values of the fibonacci.
        We don't need the entire array to store the values.
    */


    public int fib(int n) {

        if(n == 0 || n == 1) return n;
        
        int[]  fib = new int[n + 1];

        fib[0] = 0;
        fib[1] = 1;

        for(int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        return fib[n];
        
    }
}
// @lc code=end

