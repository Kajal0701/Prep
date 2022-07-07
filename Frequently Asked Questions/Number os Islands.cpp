void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<int>>& vis)
{
    int n = grid.size();    int m = grid[0].size();
    int dx[4] = {0, 0, 1, -1};  int dy[4] = {1, -1, 0, 0};
    vis[x][y] = 1;  
    for(int i=0; i<4; i++)
    {
        int xx = x + dx[i];     int yy = y + dy[i];
        if(xx >=0 && xx < n && yy >=0 && yy < m && !vis[xx][yy] && grid[xx][yy] == '1')
        {
            dfs(xx, yy, grid, vis);
        }
    }
}
    
int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();    int m = grid[0].size();
    vector<vector<int>>vis(n, vector<int>(m, 0));
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '1')
            {
                dfs(i, j, grid, vis);
                count++;
            }
        }
    }
    return count;
}