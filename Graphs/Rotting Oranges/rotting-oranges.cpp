class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
    
            // intially push all rotten oranges to a queue
    
            // keep a level variable 
            // how many levels of BFS we do , will give us the number of minutes.
    
    
            int m = grid.size(), n = grid[0].size();
    
            queue<pair<int, int>> q;
            vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
            int rottenOranges, freshOranges;
    
            int level = -1;
    
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
    
                    if(grid[i][j] == 2) {
                        q.push({i, j});
                        rottenOranges++;
                    }
    
                    if(grid[i][j] == 1) freshOranges++;
    
    
                }
            }
    
            while(!q.empty()){
    
                int q_size = q.size();
    
                level++;
    
                for(int i = 0; i < q_size; i++){
    
                    pair<int, int> rotten = q.front();
    
                    int x = rotten.first, y = rotten.second;
    
                    q.pop();
    
                    // we check if atleast one neighbor was changed 
    
                    for(auto [r, c] : dirs){
    
                        int nx = x + r;
                        int ny = y + c;
    
                        
    
                        if(nx >= 0 && ny >= 0 & nx < m && ny < n && grid[nx][ny] == 1){
    
                            // oranges
                            // if all neighbors are rotten, then don't push it to queue
    
                            // nx ny = 1
                            // 2 2 1 2 2
                            q.push({nx, ny});
                            grid[nx][ny] = 2;
                            rottenOranges++;
                            freshOranges--;
    
                        }
    
    
                    }
    
    
                }
    
                // level++;
    
    
            }
    
    
    
            return (freshOranges == 0) ? level : -1;
    
            
        }
    };