/*
 * @lc app=leetcode id=366 lang=java
 *
 * [366] Find Leaves of Binary Tree
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
    public List<List<Integer>> findLeaves(TreeNode root) {


        List<List<Integer>> res = new ArrayList<>();

        TreeMap<Integer, List<Integer>> hm = new TreeMap<>();
        height(root, hm);

        for(int level: hm.keySet()){
            List<Integer> temp = hm.get(level);
            res.add(temp);
        }

        return res;


        
    }

    // recursive function to return the left over tree with all its leaves removed (once!)

    static int height(TreeNode currNode, TreeMap<Integer, List<Integer>> hm){

        if(currNode == null) return -1;

        else if(currNode.left == null && currNode.right == null){

            // it's a leaf

            hm.putIfAbsent(0, new ArrayList<>());
            hm.get(0).add(currNode.val);

            return 0;

        } else {

            int level = 1 + Math.max(height(currNode.left, hm), height(currNode.right, hm));
            hm.putIfAbsent(level, new ArrayList<>());
            hm.get(level).add(currNode.val);

            return level;

        }
    }
    
    
}
// @lc code=end

