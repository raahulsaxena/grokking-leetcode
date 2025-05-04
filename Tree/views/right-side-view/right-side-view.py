from collections import deque, List

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:

        res = []

        if root is None:
            return res

        q = deque()

        q.append(root)

        while q:

            level_size = len(q)

            for i in range(level_size):

                node = q.popleft();

                if i == level_size - 1:
                    res.append(node.val)

                if node.left:
                    q.append(node.left)

                if node.right:
                    q.append(node.right)

        return res