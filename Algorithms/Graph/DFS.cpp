void dfs(int node, vector<int>& vis, vector<int>adj[])
{
	vis[node] = 1;
	cout<<node<<" ";
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			dfs(it, vis, adj);
		}
	}
}

void dfstraversal(int n, vector<vector<int>>& edges)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1].push_back(edges[i][0]]);
	}
	vector<int>vis(n+1, 0);
	
	for(int i=0; i<n; i++)
	{
		if(!vis[i])
		{
			dfs(i, adj, vis);
			
		}
	}

}