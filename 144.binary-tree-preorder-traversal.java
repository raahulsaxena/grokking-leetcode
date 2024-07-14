/*
 * @lc app=leetcode id=144 lang=java
 *
 * [144] Binary Tree Preorder Traversal
 */

// @lc code=start

import java.util.Stack;

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
/*
 * Pattern : Tree Traversal
 * Iterative Preorder Traversal
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {

        List<Integer> res = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();

        if(root == null) return res;

        stack.add(root);

        while(!stack.isEmpty()){

            TreeNode currNode = stack.pop();
            res.add(currNode.val);

            // IMP: acc. to the question, right node to be returned first, and then the left node
            if(currNode.right != null) stack.add(currNode.right);
            if(currNode.left != null) stack.add(currNode.left);


        }

        return res;
        
    }
}
// @lc code=end

