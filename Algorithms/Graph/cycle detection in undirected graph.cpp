//Cycle Detection in Undirected Graph using DFS

bool isCycle(int node, int parent, vector<int>adj[], vector<int>& vis)
{
	vis[node] = 1;
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			if(isCycle(it, node, adj, vis))
			{
				return true;
			}
		}
		else if(it != parent)
		{
			return true;
		}
	}
	return false;
}


bool checkCycle(vector<int>& edges, int n)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<edges.size(); i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1]].push_back(edges[i][0]);
	}

	for(int i=0; i<n; i++)
	{
		if(isCycle(i, -1, adj, vis))
		{
			return true;
		}
	}
	return false;

}