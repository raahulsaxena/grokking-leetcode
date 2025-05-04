from collections import List

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:


        def dfs(grid, row, col):

            if row < 0 or col < 0 or row >= m or col >= n or grid[row][col] == '2' or grid[row][col] == '0':
                return
            
            grid[row][col] = '2'

            dfs(grid, row - 1, col)
            dfs(grid, row + 1, col)
            dfs(grid, row, col - 1)
            dfs(grid, row, col + 1)

            return

        count = 0

        m = len(grid)
        n = len(grid[0])

        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1' :
                    dfs(grid, i, j)
                    count += 1
        
        return count