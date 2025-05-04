
"""
## Approach
- Initialize a list that will store the inorder elements
- Define a helper function called inorder
	- If the root is not null, do the following:
		- visit the left child using the inorder function
		- print the current node value
		- visit the right child using the inorder function

## Time Complexity
- O(N) - we will visit all the nodes of the tree only once.
- O(N) - for storing the inorder elements in the res list.

"""

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:

        res = []
        
        def inorder(root):

            if root is not None:

                inorder(root.left)
                res.append(root.val)
                inorder(root.right)
                

        inorder(root)

        return res
    
