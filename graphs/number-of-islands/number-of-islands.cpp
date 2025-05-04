#include<vector>

using namespace std;

class Solution {
    public:
        int numIslands(vector<vector<char>>& grid) {
    
            int c = 0;
    
            int m = grid.size(), n = grid[0].size();
    
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
    
                    if(grid[i][j] == '1'){
                        dfs(grid, i, j);
                        c++;
                    }
    
                }
            }
    
            return c;
            
        }
    
        void dfs(vector<vector<char>> &grid, int r, int c){
    
            if( r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '0') return;
    
    
            grid[r][c] = '0';
    
            dfs(grid, r + 1, c);
            dfs(grid, r - 1, c);
            dfs(grid, r, c - 1);
            dfs(grid, r, c + 1);
    
    
        }
    };