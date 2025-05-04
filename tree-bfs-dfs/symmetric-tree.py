class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:


        def check(node1, node2):

            if node1 is None or node2 is None:
                return node1 == node2

            if node1.val != node2.val:
                
                return False

            return check(node1.left, node2.right) and check(node1.right, node2.left)

        
        return check(root.left, root.right)