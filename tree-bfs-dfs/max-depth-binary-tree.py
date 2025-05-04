class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:

        def depth(root):

            if root is None:
                return 0
            
            return 1 + max(depth(root.left), depth(root.right))

        
        return depth(root)