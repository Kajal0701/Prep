
bool isCycle(int node, vector<int>adj[], vector<int>& vis, vector<int>& dfsvis)
{
	vis[node] = 1;	dfsvis[node] = 1;
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			if(isCycle(it, adj, vis, dfsvis))
			{
				return true;
			}
		}
		else if(dfsvis[it])
		{
			return true;
		}
	}
	dfsvis[node] = 0;
	return false;
}



bool checkCycle(vector<int>& edges, int n)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<edges.size(); i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
	}
	vector<int>vis(n+1, 0);	vector<int>dfsvis(n+1, 0);

	for(int i=0; i<n; i++)
	{
		if(isCycle(i, adj, vis, dfsvis))
		{
			return true;
		}
	}
	return false;

}