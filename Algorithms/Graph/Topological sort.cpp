void dfs(int node, vector<int>adj[], vector<int>& vis, stack<int>& st)
{
	vis[node] = 1;
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			dfs(it, adj, vis, st);
		}
	}
	st.push(node);
}


vector<int> topoSort(int n, vector<vector<int>>& edges)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1].push_back(edges[i][0]]);
	}
	stack<int>st;	vector<int>res;
	vector<int>vis(n+1, 0);
	for(int i=0; i<n; i++)
	{
		if(!vis[it])
		{
			dfs(it, adj, vis, st);
		}
	}
	while(!st.empty())
	{
		res.push_back(st.top());
		st.pop();
	}
	return res;
}