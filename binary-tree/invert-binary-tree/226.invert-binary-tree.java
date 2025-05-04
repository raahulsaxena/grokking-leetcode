/*
 * @lc app=leetcode id=226 lang=java
 *
 * [226] Invert Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode invertTree(TreeNode root) {

        TreeNode currNode = root;

        if(currNode == null) return null;

        // swap the left and right children of the current node

        TreeNode temp = currNode.left;

        currNode.left = currNode.right;

        currNode.right = temp;

        // recursively invert the left and right children of the current node

        invertTree(currNode.left);
        invertTree(currNode.right);

        return currNode;
    }
}
// @lc code=end

