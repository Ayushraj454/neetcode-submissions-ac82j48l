class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>>q;
         for(int i = 0 ; i < m ; i++)
         {
            for(int j = 0 ; j < n ; j++)
            {
                if(grid[i][j] == 0)
                {
                    q.push({i,j});
                }
            }
         }

         vector<vector<int>> dirs = {{-1,0},{1,0}, {0,-1},{0,1}};

         while(q.empty() != true)
         {
            int row = q.front().first ;
            int cols = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++)
            {
                int r = row + dirs[i][0];
                int c = cols + dirs[i][1];

                if(r < 0 || r >= m || c < 0 || c >= n || grid[r][c] != INT_MAX)
                {
                    continue;
                }
                
               grid[r][c] = grid[row][cols] + 1;
               q.push({r,c});
            }
         }
    }
};
