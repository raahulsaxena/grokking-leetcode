class Solution {
    public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
    
            int m = grid.size(), n = grid[0].size();
            vector<vector<bool>> visited(m, vector<bool>(n, false));
    
            int max_area = 0;
    
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 1){
    
                        int curr_area = 0;
    
                        dfs(grid, i, j, curr_area, visited);
    
                        max_area = max(max_area, curr_area);
                    }
                }
            }
    
            return max_area;
    
            
        }
    
        void dfs(vector<vector<int>> &grid, int r, int c, int &current_area, vector<vector<bool>> &visited){
    
            if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0) return;
    
            if(visited[r][c]) return;
    
            visited[r][c] = true;
    
            current_area++;
    
            dfs(grid, r + 1, c, current_area, visited);
            dfs(grid, r - 1, c, current_area, visited);
            dfs(grid, r, c + 1, current_area, visited);
            dfs(grid, r, c - 1, current_area, visited);
    
    
        }
    };