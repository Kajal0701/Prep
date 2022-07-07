//Bipartite graph

bool isbipartite(int node, vector<int>adj[], vector<int>& vis, vector<int>& col, int c)
{
	vis[node] = 1;
	col[node] = c;

	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			if(isbipartite(it, adj, vis, col, c^1))
			{
				return true;
			}
		}
		else if(col[it] == col[node])
		{
			return true;
		}
	}
	return false;
}


int bipartite(int n, vector<vector<int>>& edges)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1].push_back(edges[i][0]]);
	}
	vector<int>vis(n+1, 0);	vector<int>col(n+1, -1);
	
	for(int i=0; i<n; i++)
	{
		if(isbipartite(i, adj, vis, col, 0))
		{
			return true;
		}
	}
	return false;

}