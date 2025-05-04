/*
 * @lc app=leetcode id=662 lang=java
 *
 * [662] Maximum Width of Binary Tree
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

class Pair {
    TreeNode node;
    int position;

    Pair(TreeNode node, int position) {
        this.node = node;
        this.position = position;
    }
}

class Solution {
    public int widthOfBinaryTree(TreeNode root) {
        
        int maxWidth = 0;

        Queue<Pair> queue = new LinkedList<>();
        

        if(root == null) return 0;

        queue.add(new Pair(root, 1));

        while(!queue.isEmpty()){

            int levelSize = queue.size();
            int minPosition = queue.peek().position;

            int firstPos = 0, lastPos = 0;

            for(int i = 0; i < levelSize; i++){

                Pair currPair = queue.poll();
                TreeNode currNode = currPair.node;
                int position = currPair.position - minPosition;

                if(i == levelSize - 1){
                    lastPos = position;
                }

                if(currNode.left != null) queue.add(new Pair(currNode.left, 2* position));
                if(currNode.right != null) queue.add(new Pair(currNode.right, 2* position + 1));

            }

            maxWidth = Math.max(maxWidth, lastPos - firstPos + 1);


        }

        return maxWidth;


    }
}
// @lc code=end

