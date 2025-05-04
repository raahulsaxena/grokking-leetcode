class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:

        # exchange values of left and child children recursively
        if root is not None:

            left_node = root.left
            right_node = root.right

            root.right = left_node
            root.left = right_node

            self.invertTree(root.left)
            self.invertTree(root.right)

            return root