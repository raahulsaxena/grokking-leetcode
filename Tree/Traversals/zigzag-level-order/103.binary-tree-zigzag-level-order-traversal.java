/*
 * @lc app=leetcode id=103 lang=java
 *
 * [103] Binary Tree Zigzag Level Order Traversal
 */

// @lc code=start

import java.util.Collections;

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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {

        List<List<Integer>> res = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        boolean leftToRight = true;

        if(root == null) return res;

        queue.add(root);

        while(!queue.isEmpty()){

            int levelSize = queue.size();
            List<Integer> currentLevel = new ArrayList<>();

            for(int i = 0; i < levelSize; i++){

                TreeNode currNode = queue.poll();
                if(leftToRight) currentLevel.add(currNode.val);
                else currentLevel.add(0, currNode.val);


                if(currNode.left != null) queue.add(currNode.left);
                if(currNode.right != null) queue.add(currNode.right);

                // toggling based on res.size() will not work!
    
            }
            res.add(currentLevel);
            leftToRight = !leftToRight;

        }

        return res;
        
    }
}
// @lc code=end

