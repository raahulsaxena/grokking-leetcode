/*
 * @lc app=leetcode id=94 lang=java
 *
 * [94] Binary Tree Inorder Traversal
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
/*
 * Pattern: Tree Traversals
 * Iterative Inorder Traversal
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {


        List<Integer> res = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();

        TreeNode currNode = root;

        if(currNode == null) return res;

        while(!stack.isEmpty() || currNode != null){


            // keep pushing the left children of currNode & currNode itself
            while(currNode != null){
                stack.add(currNode);
                currNode = currNode.left;
            }

            // process the current Node
            TreeNode popped = stack.pop();
            res.add(popped.val);

            currNode = popped.right;

            


        }

        return res;

        
    }
}
// @lc code=end

